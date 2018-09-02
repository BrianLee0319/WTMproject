// See LICENSE.SiFive for license details.

package freechips.rocketchip.util.property

import Chisel._
import chisel3.internal.sourceinfo.{SourceInfo, SourceLine}
import chisel3.util.{ReadyValidIO}

sealed abstract class PropertyType(name: String) {
  override def toString: String = name
}

object PropertyType {
  object Assert extends PropertyType("Assert")
  object Assume extends PropertyType("Assume")
  object Cover extends PropertyType("Cover")
}

trait BasePropertyParameters {
  val pType: PropertyType
  val cond: Bool
  val label: String
  val message: String
}

case class CoverPropertyParameters(
    cond: Bool,
    label: String = "",
    message: String = "") extends BasePropertyParameters {
  val pType = PropertyType.Cover
}

abstract class BasePropertyLibrary {
  def generateProperty(prop_param: BasePropertyParameters)(implicit sourceInfo: SourceInfo)
}

class DefaultPropertyLibrary extends BasePropertyLibrary {
  def generateProperty(prop_param: BasePropertyParameters)(implicit sourceInfo: SourceInfo) {
    // default is to do nothing
    Unit
  }
}

abstract class BaseProperty {
  def generateProperties(): Seq[BasePropertyParameters]
}

case class CoverBoolean(cond: Bool, labels: Seq[String]) {
}

// CrossProperty.generateProperties() will generate Boolean crosses for the cond sequence
//  E.g.
//   Cond = [ [A1, A2, A3],
//            [B2],
//            [C1, C2] ]
//  It will generate the following properties
//   [ A1 && B2 && C1,
//     A1 && B2 && C2,
//     A2 && B2 && C1,
//     A2 && B2 && C2,
//     A3 && B2 && C1,
//     A3 && B2 && C2 ]
//  Each of the boolean expression (A1, A2, C1, etc.) have a label associated with it
//    User can exclude a particular cross from being generated by adding it to the exclude list
//  e.g.
//   exclude = [ ["A1_label", "C2_Label"],
//               ["A3_label", "B2_label"] ]
//  will exclude all crosses with those labels, so the new cross list will be 
//   [ A1 && B2 && C1,
//     A2 && B2 && C1,
//     A2 && B2 && C2 ]

//  Each boolean expression can be associated with more than one label

class CrossProperty(cond: Seq[Seq[CoverBoolean]], exclude: Seq[Seq[String]], message: String) extends BaseProperty {
  def listProperties(c1: CoverBoolean, c2: Seq[CoverBoolean]): Seq[CoverBoolean] = {
    if (c2.isEmpty) {
      Seq(c1)
    } else {
      c2.map( (c: CoverBoolean) => {
        new CoverBoolean(c1.cond && c.cond, c1.labels ++ c.labels)
      })
    }
  }

  def crossProperties(cond: Seq[Seq[CoverBoolean]]): Seq[CoverBoolean] = {
    if (cond.isEmpty) {
      Seq()
    } else {
      cond.head.map( (c1: CoverBoolean) => {
        listProperties(c1, crossProperties(cond.tail))
      }).reduce(_ ++ _)
    }
  }
  def inSequence(search: Seq[String], find: Seq[String]): Boolean = {
    if (find.isEmpty) {
      true
    } else {
      find.map( (s:String) => {
        search.contains(s)
      }).reduce( _ && _ )
    }
  }
  def SeqsinSequence(search: Seq[String], find: Seq[Seq[String]]): Boolean = {
    if (find.isEmpty) {
      false
    } else {
      find.map( (s: Seq[String]) => {
        inSequence(search, s)
      }).reduce (_ || _)
    }
  }

  def generateProperties(): Seq[CoverPropertyParameters] = {
    crossProperties(cond).map( (c: CoverBoolean) => {
      if (!SeqsinSequence(c.labels, exclude)) {
        new CoverPropertyParameters(
          cond = c.cond,
          label = c.labels.reduce( (s1: String, s2: String) => {s1 + "_" + s2} ),
          message = message + " " + c.labels.map("<" + _ + ">").reduce ( (s1: String, s2: String) => { s1 + " X " + s2 }))
      } else {
        new CoverPropertyParameters(
          cond = true.B,
          label = c.labels.reduce( (s1: String, s2: String) => {s1 + "_" + s2} ) + "_EXCLUDE",
          message = message + " " + c.labels.map("<" + _ + ">").reduce ( (s1: String, s2: String) => { s1 + " X " + s2 }))
      }
    })
  }

}

// The implementation using a setable global is bad, but removes dependence on Parameters
// This change was made in anticipation of a proper cover library
object cover {
  private var propLib: BasePropertyLibrary = new DefaultPropertyLibrary
  def setPropLib(lib: BasePropertyLibrary): Unit = this.synchronized {
    propLib = lib
  }
  def apply(cond: Bool)(implicit sourceInfo: SourceInfo): Unit = {
    propLib.generateProperty(CoverPropertyParameters(cond))
  }
  def apply(cond: Bool, label: String)(implicit sourceInfo: SourceInfo): Unit = {
    propLib.generateProperty(CoverPropertyParameters(cond, label))
  }
  def apply(cond: Bool, label: String, message: String)(implicit sourceInfo: SourceInfo): Unit = {
    propLib.generateProperty(CoverPropertyParameters(cond, label, message))
  }
  def apply(prop: BaseProperty)(implicit sourceInfo: SourceInfo): Unit = {
    prop.generateProperties().foreach( (pp: BasePropertyParameters) => {
      if (pp.pType == PropertyType.Cover) {
        propLib.generateProperty(CoverPropertyParameters(pp.cond, pp.label, pp.message))
      }
    })
  }
  def apply[T <: Data](rv: ReadyValidIO[T], label: String, message: String)(implicit sourceInfo: SourceInfo): Unit = {
    apply( rv.valid &&  rv.ready, label + "_FIRE",  message + ": valid and ready")
    apply( rv.valid && !rv.ready, label + "_STALL", message + ": valid and not ready")
    apply(!rv.valid &&  rv.ready, label + "_IDLE",  message + ": not valid and ready")
    apply(!rv.valid && !rv.ready, label + "_FULL",  message + ": not valid and not ready")
  }
}
