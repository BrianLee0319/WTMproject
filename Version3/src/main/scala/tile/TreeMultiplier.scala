
//TreeUnit
//Max:4-bit multiplication(outcome=>8-bit)
package freechips.rocketchip.tile
import chisel3._

/*class CSA extends Module{
        val io = IO(new Bundle() {
                val  e    = Input(Bool())
                val  data0 = Input(UInt(8.W))
            	val  data1 = Input(UInt(8.W))
            	val  data2 = Input(UInt(8.W))
                val  sum0 = Output(UInt(8.W))
                val  sum1 = Output(UInt(8.W))
                })
        val input_array = Reg(Vec(3,UInt(8.W)))
        val temp_array = Reg(Vec(2,UInt(8.W)))
        when(io.e){
        input_array(0) := io.data0
        input_array(1) := io.data1
        input_array(2) := io.data2  
        temp_array(0) := input_array(0) ^ input_array(1) ^ input_array(2)
        temp_array(1) := ((input_array(0) & input_array(1)) |(input_array(1) & input_array(2)) | (input_array(0) & input_array(2))) << 1
        io.sum0 := temp_array(0)
        io.sum1 := temp_array(1)
        }
        .otherwise{
	io.sum0 := 0.U
	io.sum1 := 0.U
        input_array := input_array
        temp_array := temp_array
        }
}

class GCD extends Module{
        val io = IO(new Bundle() {
                val  e    = Input(Bool())
                val  data0 = Input(UInt(8.W))
                val  data1 = Input(UInt(8.W))
                val  sum = Output(UInt(8.W))
                  })
val CSA0 = Module(new CSA)
CSA0.io.e := io.e
CSA0.io.data0 := Mux(io.data1(0),io.data0,0.U)
CSA0.io.data1 := Mux(io.data1(1),io.data0,0.U)<<1
CSA0.io.data2 := Mux(io.data1(2),io.data0,0.U)<<2

val CSA1 = Module(new CSA)
CSA1.io.e := io.e
CSA1.io.data0 := Mux(io.data1(3),io.data0,0.U)<<3
CSA1.io.data1 := CSA0.io.sum0
CSA1.io.data2 := CSA0.io.sum1

io.sum := CSA1.io.sum0 + CSA1.io.sum1
        }*/
class CSA extends Module{
        val io = IO(new Bundle() {
                val  e    = Input(Bool())
                val  data0 = Input(UInt(32.W))
	    	val  data1 = Input(UInt(32.W))
	    	val  data2 = Input(UInt(32.W))
                val  sum0 = Output(UInt(32.W))
		val  sum1 = Output(UInt(32.W))
                })
        val input_array = Reg(Vec(3,UInt(32.W)))
        val temp_array = Reg(Vec(2,UInt(32.W)))
        when(io.e){
        input_array(0) := io.data0
        input_array(1) := io.data1
        input_array(2) := io.data2  
        temp_array(0) := input_array(0) ^ input_array(1) ^ input_array(2)
        temp_array(1) := ((input_array(0) & input_array(1)) |(input_array(1) & input_array(2)) | (input_array(0) & input_array(2))) << 1
        io.sum0 := temp_array(0)
        io.sum1 := temp_array(1)
        }
        .otherwise{
	io.sum0 := 0.U
	io.sum1 := 0.U
        input_array := input_array
        temp_array := temp_array
        }
}

class GCD extends Module{
        val io = IO(new Bundle() {
                val  e    = Input(Bool())
                val  data0 = Input(UInt(64.W))
	    	val  data1 = Input(UInt(64.W))
                val  sum0 = Output(UInt(64.W))
		val  sum1 = Output(UInt(64.W))                  
		})
val op0 = io.data0(15,0)
val op1 = io.data0(47,32)

val CSA0 = Module(new CSA)
CSA0.io.e := io.e
CSA0.io.data0 := Mux(io.data1(0),op0,0.U)
CSA0.io.data1 := Mux(io.data1(1),op0,0.U)<<1
CSA0.io.data2 := Mux(io.data1(2),op0,0.U)<<2

val CSA1 = Module(new CSA)
CSA1.io.e := io.e
CSA1.io.data0 := Mux(io.data1(3),op0,0.U)<<3
CSA1.io.data1 := Mux(io.data1(4),op0,0.U)<<4
CSA1.io.data2 := Mux(io.data1(5),op0,0.U)<<5

val CSA2 = Module(new CSA)
CSA2.io.e := io.e
CSA2.io.data0 := Mux(io.data1(6),op0,0.U)<<6
CSA2.io.data1 := Mux(io.data1(7),op0,0.U)<<7
CSA2.io.data2 := Mux(io.data1(8),op0,0.U)<<8

val CSA3 = Module(new CSA)
CSA3.io.e := io.e
CSA3.io.data0 := Mux(io.data1(9),op0,0.U)<<9
CSA3.io.data1 := Mux(io.data1(10),op0,0.U)<<10
CSA3.io.data2 := Mux(io.data1(11),op0,0.U)<<11

val CSA4 = Module(new CSA)
CSA4.io.e := io.e
CSA4.io.data0 := Mux(io.data1(12),op0,0.U)<<12
CSA4.io.data1 := Mux(io.data1(13),op0,0.U)<<13
CSA4.io.data2 := Mux(io.data1(14),op0,0.U)<<14

val CSA5 = Module(new CSA)
CSA5.io.e := io.e
CSA5.io.data0 := Mux(io.data1(15),op0,0.U)<<15
CSA5.io.data1 := CSA0.io.sum0
CSA5.io.data2 := CSA0.io.sum1

val CSA6 = Module(new CSA)
CSA6.io.e := io.e
CSA6.io.data0 := CSA1.io.sum0
CSA6.io.data1 := CSA1.io.sum1
CSA6.io.data2 := CSA2.io.sum0

val CSA7 = Module(new CSA)
CSA7.io.e := io.e
CSA7.io.data0 := CSA2.io.sum1
CSA7.io.data1 := CSA3.io.sum0
CSA7.io.data2 := CSA3.io.sum1

val CSA8 = Module(new CSA)
CSA8.io.e := io.e
CSA8.io.data0 := CSA4.io.sum0
CSA8.io.data1 := CSA4.io.sum1
CSA8.io.data2 := CSA5.io.sum0

val CSA9 = Module(new CSA)
CSA9.io.e := io.e
CSA9.io.data0 := CSA5.io.sum1
CSA9.io.data1 := CSA6.io.sum0
CSA9.io.data2 := CSA6.io.sum1

val CSA10 = Module(new CSA)
CSA10.io.e := io.e
CSA10.io.data0 := CSA7.io.sum0
CSA10.io.data1 := CSA7.io.sum1
CSA10.io.data2 := CSA8.io.sum0

val CSA11 = Module(new CSA)
CSA11.io.e := io.e
CSA11.io.data0 := CSA8.io.sum1
CSA11.io.data1 := CSA9.io.sum0
CSA11.io.data2 := CSA9.io.sum1

val CSA12 = Module(new CSA)
CSA12.io.e := io.e
CSA12.io.data0 := CSA10.io.sum0
CSA12.io.data1 := CSA10.io.sum1
CSA12.io.data2 := CSA11.io.sum0

val CSA13 = Module(new CSA)
CSA13.io.e := io.e
CSA13.io.data0 := CSA11.io.sum1
CSA13.io.data1 := CSA12.io.sum0
CSA13.io.data2 := CSA12.io.sum1

val CSA14 = Module(new CSA)
CSA14.io.e := io.e
CSA14.io.data0 := Mux(io.data1(32),op1,0.U)
CSA14.io.data1 := Mux(io.data1(33),op1,0.U)<<1
CSA14.io.data2 := Mux(io.data1(34),op1,0.U)<<2

val CSA15 = Module(new CSA)
CSA15.io.e := io.e
CSA15.io.data0 := Mux(io.data1(35),op1,0.U)<<3
CSA15.io.data1 := Mux(io.data1(36),op1,0.U)<<4
CSA15.io.data2 := Mux(io.data1(37),op1,0.U)<<5

val CSA16 = Module(new CSA)
CSA16.io.e := io.e
CSA16.io.data0 := Mux(io.data1(38),op1,0.U)<<6
CSA16.io.data1 := Mux(io.data1(39),op1,0.U)<<7
CSA16.io.data2 := Mux(io.data1(40),op1,0.U)<<8

val CSA17 = Module(new CSA)
CSA17.io.e := io.e
CSA17.io.data0 := Mux(io.data1(41),op1,0.U)<<9
CSA17.io.data1 := Mux(io.data1(42),op1,0.U)<<10
CSA17.io.data2 := Mux(io.data1(43),op1,0.U)<<11

val CSA18 = Module(new CSA)
CSA18.io.e := io.e
CSA18.io.data0 := Mux(io.data1(44),op1,0.U)<<12
CSA18.io.data1 := Mux(io.data1(45),op1,0.U)<<13
CSA18.io.data2 := Mux(io.data1(46),op1,0.U)<<14

val CSA19 = Module(new CSA)
CSA19.io.e := io.e
CSA19.io.data0 := Mux(io.data1(47),op1,0.U)<<15
CSA19.io.data1 := CSA14.io.sum0
CSA19.io.data2 := CSA14.io.sum1

val CSA20 = Module(new CSA)
CSA20.io.e := io.e
CSA20.io.data0 := CSA15.io.sum0
CSA20.io.data1 := CSA15.io.sum1
CSA20.io.data2 := CSA16.io.sum0

val CSA21 = Module(new CSA)
CSA21.io.e := io.e
CSA21.io.data0 := CSA16.io.sum1
CSA21.io.data1 := CSA17.io.sum0
CSA21.io.data2 := CSA17.io.sum1

val CSA22 = Module(new CSA)
CSA22.io.e := io.e
CSA22.io.data0 := CSA18.io.sum0
CSA22.io.data1 := CSA18.io.sum1
CSA22.io.data2 := CSA19.io.sum0

val CSA23 = Module(new CSA)
CSA23.io.e := io.e
CSA23.io.data0 := CSA19.io.sum1
CSA23.io.data1 := CSA20.io.sum0
CSA23.io.data2 := CSA20.io.sum1

val CSA24 = Module(new CSA)
CSA24.io.e := io.e
CSA24.io.data0 := CSA21.io.sum0
CSA24.io.data1 := CSA21.io.sum1
CSA24.io.data2 := CSA22.io.sum0

val CSA25 = Module(new CSA)
CSA25.io.e := io.e
CSA25.io.data0 := CSA22.io.sum1
CSA25.io.data1 := CSA23.io.sum0
CSA25.io.data2 := CSA23.io.sum1

val CSA26 = Module(new CSA)
CSA26.io.e := io.e
CSA26.io.data0 := CSA24.io.sum0
CSA26.io.data1 := CSA24.io.sum1
CSA26.io.data2 := CSA25.io.sum0

val CSA27 = Module(new CSA)
CSA27.io.e := io.e
CSA27.io.data0 := CSA25.io.sum1
CSA27.io.data1 := CSA26.io.sum0
CSA27.io.data2 := CSA26.io.sum1

io.sum0 := CSA27.io.sum0 + CSA27.io.sum1
io.sum1 := CSA13.io.sum0 + CSA13.io.sum1
        }

