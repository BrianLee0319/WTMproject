# WTMproject
Based on https://github.com/ucb-bar/project-template

Replace "rocket-chip" with the existed one
Modified part：
https://github.com/BrianLee0319/WTMproject/blob/master/Version1/scala/tile/LazyRoCC.scala
https://github.com/BrianLee0319/WTMproject/blob/master/Version1/scala/tile/TreeMultiplier.scala
https://github.com/BrianLee0319/WTMproject/blob/master/Version1/scala/system/Configs.scala#L42
https://github.com/BrianLee0319/WTMproject/blob/master/Version1/scala/subsystem/Configs.scala#L190

Follow the process to build emulator

https://github.com/freechipsproject/rocket-chip#-1-using-the-high-performance-cycle-accurate-verilator

Below is the testbench

https://github.com/BrianLee0319/WTMproject/blob/master/Version1/tests/multest.c

Use Makefile to compile to .riscv file

Then execute it using the generated emulator to show the result

(debug version of emulator to generate vcd waveform)
