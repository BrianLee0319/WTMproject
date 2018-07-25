
//TreeUnit
//Max:4-bit multiplication(outcome=>8-bit)
package freechips.rocketchip.tile
import chisel3._

class CSA extends Module{
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
        }
