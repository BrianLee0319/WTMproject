// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__26(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__26\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16260
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16260
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16271
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16274: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16274,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:25:26)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16293
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16296: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16296,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16304
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16315
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16318: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16318,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16337
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16340: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16340,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16348
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16359
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16362: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16362,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16381
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16384: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16384,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16392
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16403
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16406: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16406,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16425
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16428: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16428,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16436
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16447
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16450: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16450,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:25:26)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16469
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16472: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16472,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16480
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16491
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16494: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16494,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16502
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16513
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16516: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16516,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16524
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16535
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16538: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16538,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16546
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16557
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16560: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16560,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16568
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:25:26)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16579
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16582: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16582,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16601
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16604: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16604,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16612
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16623
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16626: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16626,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_519))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16645
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_519))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16648: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16648,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16667
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16670: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16670,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16689
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16692: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16692,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16711
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16714: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16714,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16733
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16736: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16736,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16755
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16758: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16758,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16777
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16780: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16780,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16799
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16802: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16802,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16821
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16824: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16824,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16843
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16846: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16846,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16865
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16868: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16868,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16887
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16890: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16890,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16909
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16912: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16912,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16931
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16934: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16934,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16953
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16956: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16956,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_781))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16975
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_781))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:16978: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",16978,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:16997
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17000: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17000,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17019
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17022: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17022,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17041
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17044: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17044,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17063
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17066: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17066,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17085
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17088: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17088,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17096
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17107
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17110: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17110,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17129
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17132: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17132,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17151
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17154: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17154,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17173
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17176: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17176,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17195
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17198: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17198,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17206
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17217
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17220: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17220,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17239
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17242: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17242,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17261
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17264: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17264,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:25:26)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17283
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17286: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17286,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17305
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17308: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17308,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17316
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:25:26)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17327
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17330: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17330,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17349
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17352: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17352,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17371
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17374: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17374,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17393
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17396: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17396,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17418: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17418,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17426
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:25:26)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17437
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17440: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17440,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17459
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17462: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17462,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17492
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17503
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17506: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17506,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17514
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17525
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17528: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17528,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17536
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17547
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17550: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17550,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17558
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17569
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17572: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17572,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17602
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17613
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17616: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17616,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17646
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17657
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17660: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17660,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17668
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17679
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17682: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17682,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17690
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17701
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17704: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17704,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17723
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17726: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17726,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17756
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17767
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17770: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17770,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17789
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17792: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17792,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17811
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17814: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17814,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17844
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17855
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17858: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17858,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17877
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17880: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17880,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17888
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17899
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17902: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17902,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17943
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17946: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17946,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17965
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17968: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17968,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17976
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:17987
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:17990: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",17990,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18064
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:124 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18075
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1543))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:18078: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",18078,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:126 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18119
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:18122: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",18122,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:127 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:18141
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:18144: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",18144,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19032
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:196 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19043
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19046: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19046,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19054
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:197 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19065
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19068: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19068,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19076
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:198 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19087
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19090: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19090,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19098
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:199 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19109
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19112: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19112,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19120
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:200 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19131
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19134: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19134,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19142
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:201 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19153
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19156: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19156,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19164
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:205 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19175
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19178: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19178,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19186
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:206 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19197
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19200: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19200,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19208
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:207 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19219
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19222: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19222,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19230
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:208 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19241
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19244: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19244,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19252
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:209 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19263
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19266: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19266,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19274
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:213 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19285
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19288: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19288,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19296
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:25:26)\n    at Monitor.scala:214 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19307
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19310: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19310,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19318
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:215 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19329
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19332: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19332,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19340
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:216 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19351
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19354: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19354,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19362
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:217 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19373
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19376: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19376,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19384
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:218 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19395
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19398: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19398,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:219 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19417
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19420: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19420,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19428
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:25:26)\n    at Monitor.scala:223 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19439
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19442: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19442,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19450
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:25:26)\n    at Monitor.scala:224 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19461
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19464: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19464,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19472
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:225 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19483
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19486: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19486,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19494
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:25:26)\n    at Monitor.scala:226 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19505
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19508: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19508,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19516
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:227 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19527
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19530: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19530,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19538
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:228 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19549
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19552: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19552,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19560
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:232 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19571
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19574: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19574,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:233 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19593
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19596: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19596,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19604
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:234 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19615
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19618: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19618,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:235 assert (bundle.param === UInt(0), \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19637
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19640: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19640,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19648
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:236 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19659
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19662: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19662,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:240 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19681
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19684: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19684,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:241 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19703
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19706: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19706,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:242 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19725
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19728: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19728,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:243 assert (bundle.param === UInt(0), \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19747
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19750: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19750,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19758
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:25:26)\n    at Monitor.scala:247 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19769
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19772: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19772,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19780
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:248 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19791
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19794: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19794,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19802
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:25:26)\n    at Monitor.scala:249 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19813
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19816: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19816,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:25:26)\n    at Monitor.scala:250 assert (bundle.param === UInt(0), \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19835
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19838: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19838,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:25:26)\n    at Monitor.scala:251 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19857
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19860: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19860,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19890
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2339))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19901
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2339))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19904: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19904,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19912
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2344))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19923
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2344))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19926: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19926,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2349))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19945
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2349))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19948: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19948,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2354))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19967
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2354))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19970: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19970,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19978
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:19989
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:19992: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",19992,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20000
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20011
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2409))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20014: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20014,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20022
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2414))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20033
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2414))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20036: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20036,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20044
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2419))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20055
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2419))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20058: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20058,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20066
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2424))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20077
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2424))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20080: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20080,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20088
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20099
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20102: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20102,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20110
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20121
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2434))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20124: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20124,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20154
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2490))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:367 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20165
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2490))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20168: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20168,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20220
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2505))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:370 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20231
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2505))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20234: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20234,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20242
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:389 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20253
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20256: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20256,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20264
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2558))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:390 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20275
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2558))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20278: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20278,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20286
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:391 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20297
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2563))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20300: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20300,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20308
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2568))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:392 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20319
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2568))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20322: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20322,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20330
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:25:26)\n    at Monitor.scala:393 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20341
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2573))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20344: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20344,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20352
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20363
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20366: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20366,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20374
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2674))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:25:26)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20385
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2674))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20388: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20388,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20396
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2684))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SystemBus.scala:25:26)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20407
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2684))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20410: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20410,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20418
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2703))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:25:26)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20429
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2703))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20432: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20432,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20440
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:25:26)\n    at Monitor.scala:482 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20451
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2763))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20454: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20454,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20462
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2779)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:25:26)\n    at Monitor.scala:488 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:20473
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2779)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:20476: Assertion failed in %NTestHarness.dut.sbus.master_splitter.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",20476,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33177
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33177
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33188
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33191: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33191,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33199
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:25:47)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33210
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33213: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33213,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33221
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33232
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33235: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33235,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33254
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33257: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33257,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33276
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33279: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33279,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33298
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33301: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33301,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33320
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33323: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33323,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33342
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33345: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33345,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33364
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33367: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33367,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33375
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:25:47)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33386
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33389: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33389,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33408
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33411: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33411,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33430
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33433: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33433,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33441
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33452
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33455: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33455,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33474
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33477: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33477,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:25:47)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33496
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33499: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33499,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33518
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33521: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33521,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33540
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33543: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33543,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_519))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33562
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_519))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33565: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33565,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33573
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33584
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33587: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33587,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33595
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33606
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33609: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33609,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33617
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33628
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33631: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33631,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33639
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33650
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33653: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33653,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33661
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33672
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33675: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33675,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33694
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33697: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33697,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33716
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33719: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33719,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33738
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33741: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33741,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33760
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33763: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33763,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33782
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33785: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33785,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33793
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33804
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33807: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33807,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33826
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33829: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33829,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33848
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33851: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33851,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33870
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33873: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33873,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_781))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33892
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_781))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33895: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33895,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33914
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33917: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33917,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33936
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33939: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33939,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33958
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33961: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33961,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33980
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:33983: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",33983,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:33991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34002
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34005: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34005,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34024
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34027: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34027,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34035
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34046
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34049: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34049,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34068
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34071: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34071,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34090
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34093: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34093,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34101
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34112
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34115: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34115,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34123
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34134
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34137: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34137,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34156
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34159: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34159,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34167
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34178
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34181: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34181,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:25:47)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34200
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34203: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34203,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34211
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34222
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34225: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34225,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:25:47)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34244
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34247: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34247,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34266
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34269: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34269,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34288
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34291: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34291,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34310
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34313: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34313,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34332
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34335: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34335,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:25:47)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34354
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34357: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34357,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34376
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34379: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34379,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34420
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34423: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34423,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34442
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34445: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34445,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34464
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34467: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34467,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34486
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34489: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34489,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34519
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34530
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34533: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34533,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34563
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34574
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34577: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34577,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34585
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34596
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34599: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34599,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34607
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34618
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34621: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34621,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34629
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34640
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34643: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34643,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34673
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34684
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34687: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34687,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34695
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34706
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34709: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34709,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34717
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34728
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34731: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34731,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34761
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34772
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34775: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34775,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34783
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34794
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34797: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34797,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34805
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34816
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34819: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34819,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34849
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34860
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34863: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34863,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34871
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34882
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34885: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34885,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34893
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34904
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34907: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34907,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34981
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:124 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:34992
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1543))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:34995: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",34995,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35025
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:126 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35036
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:35039: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",35039,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35047
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:127 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35058
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:35061: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",35061,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35949
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:196 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35960
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:35963: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",35963,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35971
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:197 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35982
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:35985: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",35985,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:35993
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:198 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36004
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36007: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36007,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36015
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:199 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36026
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36029: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36029,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36037
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:200 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36048
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36051: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36051,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36059
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:201 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36070
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36073: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36073,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36081
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:205 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36092
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36095: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36095,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36103
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:206 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36114
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36117: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36117,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36125
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:207 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36136
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36139: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36139,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36147
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:208 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36158
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36161: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36161,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36169
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:209 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36180
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36183: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36183,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36191
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:213 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36202
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36205: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36205,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36213
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:25:47)\n    at Monitor.scala:214 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36224
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36227: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36227,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36235
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:215 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36246
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36249: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36249,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36257
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:216 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36268
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36271: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36271,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36279
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:217 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36290
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36293: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36293,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36301
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:218 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36312
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36315: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36315,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36323
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:219 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36334
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36337: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36337,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36345
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:25:47)\n    at Monitor.scala:223 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36356
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36359: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36359,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36367
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:25:47)\n    at Monitor.scala:224 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36378
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36381: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36381,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36389
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:225 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36400
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36403: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36403,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36411
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:25:47)\n    at Monitor.scala:226 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36422
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36425: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36425,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36433
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:227 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36444
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36447: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36447,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36455
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:228 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36466
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36469: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36469,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36477
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:232 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36488
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36491: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36491,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36499
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:233 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36510
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36513: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36513,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36521
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:234 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36532
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36535: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36535,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36543
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:235 assert (bundle.param === UInt(0), \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36554
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36557: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36557,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36565
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:236 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36576
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36579: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36579,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36587
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:240 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36598
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36601: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36601,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36609
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:241 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36620
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36623: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36623,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36631
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:242 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36642
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36645: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36645,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36653
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:243 assert (bundle.param === UInt(0), \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36664
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36667: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36667,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36675
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:25:47)\n    at Monitor.scala:247 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36686
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36689: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36689,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36697
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:248 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36708
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36711: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36711,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36719
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:25:47)\n    at Monitor.scala:249 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36730
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36733: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36733,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36741
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:25:47)\n    at Monitor.scala:250 assert (bundle.param === UInt(0), \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36752
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36755: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36755,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36763
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:25:47)\n    at Monitor.scala:251 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36774
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36777: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36777,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36807
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2339))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36818
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2339))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36821: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36821,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36829
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2344))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36840
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2344))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36843: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36843,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36851
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2349))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36862
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2349))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36865: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36865,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36873
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2354))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36884
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2354))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36887: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36887,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36895
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36906
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36909: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36909,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36917
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36928
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2409))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36931: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36931,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36939
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2414))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36950
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2414))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36953: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36953,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2419))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36972
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2419))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36975: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36975,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36983
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2424))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:36994
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2424))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:36997: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",36997,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37005
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37016
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37019: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37019,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37027
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37038
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2434))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37041: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37041,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2490))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:367 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37082
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2490))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37085: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37085,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2505))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:370 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37148
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2505))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37151: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37151,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:389 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37170
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37173: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37173,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2558))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:390 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37192
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2558))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37195: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37195,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:391 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37214
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2563))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37217: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37217,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2568))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:392 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37236
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2568))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37239: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37239,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:25:47)\n    at Monitor.scala:393 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37258
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2573))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37261: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37261,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37269
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37280
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37283: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37283,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2674))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:25:47)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37302
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2674))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37305: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37305,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2684))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SystemBus.scala:25:47)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37324
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2684))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37327: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37327,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2703))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:25:47)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37346
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2703))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37349: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37349,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:25:47)\n    at Monitor.scala:482 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37368
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2763))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37371: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37371,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2779)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:25:47)\n    at Monitor.scala:488 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:37390
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2779)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:37393: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",37393,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39156
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39156
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39167
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39170: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39170,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39178
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39189
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39192: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39192,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39200
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39211
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39214: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39214,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39222
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39233
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39236: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39236,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39244
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39255
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39258: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39258,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39266
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39277
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39280: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39280,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39288
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39299
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39302: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39302,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39310
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39321
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39324: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39324,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39332
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39343
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39346: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39346,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39354
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39365
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39368: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39368,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39376
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39387
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39390: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39390,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39409
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39412: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39412,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39420
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39431
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39434: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39434,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39453
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39456: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39456,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:78:60)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39475
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39478: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39478,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39486
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39497
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39500: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39500,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39519
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39522: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39522,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_519))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39541
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_519))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39544: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39544,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39563
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39566: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39566,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39585
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39588: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39588,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39607
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39610: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39610,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39618
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39629
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39632: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39632,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39651
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39654: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39654,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39662
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39673
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39676: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39676,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39695
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39698: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39698,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39706
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39717
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39720: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39720,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39739
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39742: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39742,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39750
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39761
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39764: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39764,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39783
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39786: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39786,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39794
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39805
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39808: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39808,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39827
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39830: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39830,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39838
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39849
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39852: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39852,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_781))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39871
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_781))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39874: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39874,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39882
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39893
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39896: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39896,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39904
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39915
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39918: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39918,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39937
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39940: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39940,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39948
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39959
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39962: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39962,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39981
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:39984: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",39984,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:39992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40003
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_863))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40006: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40006,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40025
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40028: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40028,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40047
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40050: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40050,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40069
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40072: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40072,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40091
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40094: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40094,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40113
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_453) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40116: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40116,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40135
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40138: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40138,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40157
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40160: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40160,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40179
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40182: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40182,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40201
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40204: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40204,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:78:60)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40223
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40226: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40226,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40248: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40248,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40270: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40270,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40292: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40292,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40314: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40314,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:78:60)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
				   >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40336: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40336,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40358: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40358,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40402: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40402,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40424: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40424,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40446: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40446,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40468: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40468,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40512: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40512,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40553
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40556: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40556,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40575
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40578: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40578,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40600: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40600,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40619
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40622: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40622,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40666: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40666,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40688: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40688,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40707
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40710: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40710,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40740
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40751
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40754: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40754,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40773
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40776: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40776,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40784
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40795
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1220))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40798: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40798,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40839
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40842: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40842,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40861
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40864: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40864,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40886: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40886,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:124 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:40971
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1543))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:40974: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",40974,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:126 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41015
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						<< 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:41018: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",41018,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:127 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41037
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:41040: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",41040,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:196 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41939
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:41942: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",41942,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:197 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41961
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:41964: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",41964,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:198 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41983
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:41986: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",41986,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:41994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:199 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42005
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42008: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42008,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42016
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:200 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42027
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42030: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42030,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:201 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42049
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42052: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42052,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:205 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42071
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42074: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42074,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:206 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42093
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42096: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42096,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:207 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42115
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42118: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42118,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:208 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42137
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42140: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42140,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:209 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42159
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42162: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42162,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:213 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42181
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42184: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42184,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:214 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42203
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42206: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42206,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:215 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42225
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42228: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42228,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42236
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:216 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42247
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42250: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42250,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:217 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42269
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42272: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42272,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42280
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:218 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42291
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42294: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42294,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:219 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42313
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42316: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42316,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:223 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42335
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42338: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42338,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:224 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42357
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42360: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42360,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42368
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:225 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42379
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42382: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42382,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:226 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42401
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42404: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42404,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42412
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:227 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42423
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42426: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42426,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:228 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42445
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42448: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42448,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42456
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:232 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42467
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42470: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42470,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:233 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42489
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42492: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42492,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42500
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:234 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42511
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42514: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42514,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:235 assert (bundle.param === UInt(0), \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42533
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42536: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42536,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:236 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42555
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42558: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42558,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:240 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42577
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42580: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42580,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:241 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42599
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42602: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42602,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:242 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42621
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42624: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42624,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42632
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:243 assert (bundle.param === UInt(0), \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42643
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42646: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42646,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42654
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:78:60)\n    at Monitor.scala:247 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42665
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42668: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42668,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42676
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:248 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42687
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42690: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42690,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42698
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:249 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42709
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42712: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42712,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42720
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:250 assert (bundle.param === UInt(0), \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42731
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42734: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42734,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42742
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:78:60)\n    at Monitor.scala:251 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42753
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42756: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42756,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42786
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2339))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42797
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2339))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42800: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42800,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42808
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2344))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42819
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2344))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42822: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42822,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42830
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2349))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42841
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2349))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42844: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42844,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42852
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2354))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42863
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2354))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42866: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42866,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42874
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42885
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42888: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42888,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42896
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42907
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2409))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42910: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42910,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42918
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2414))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42929
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2414))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42932: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42932,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42940
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2419))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42951
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2419))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42954: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42954,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42962
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2424))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42973
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2424))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42976: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42976,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42984
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:42995
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:42998: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",42998,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43006
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43017
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2434))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43020: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43020,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43050
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2490))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:367 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43061
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2490))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43064: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43064,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43116
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2505))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:370 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43127
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2505))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43130: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43130,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43138
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:389 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43149
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43152: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43152,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43160
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2558))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:390 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43171
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2558))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43174: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43174,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43182
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:391 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43193
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2563))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43196: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43196,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43204
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2568))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:392 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43215
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2568))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43218: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43218,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43226
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:393 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43237
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2573))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43240: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43240,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43248
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43259
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2294) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2595))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43262: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43262,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43270
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2674))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:78:60)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43281
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2623))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2674))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43284: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43284,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43292
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2684))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SystemBus.scala:78:60)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43303
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2684))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43306: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43306,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43314
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2703))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:78:60)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43325
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2703))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43328: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43328,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43336
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:482 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43347
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2364) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2728))) 
			  & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
			      >> 0x11U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3894[2U] 
					      >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2763))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43350: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43350,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43358
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2779)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:78:60)\n    at Monitor.scala:488 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:43369
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2779)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:43372: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",43372,"");
	}
    }
}
