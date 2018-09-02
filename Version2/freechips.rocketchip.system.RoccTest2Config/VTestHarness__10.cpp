// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__28(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__28\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146212
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146226: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146226,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146248: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146248,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146292: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146292,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146314: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146314,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146336: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146336,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146358: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146358,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146380: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146380,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146402: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146402,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146424: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146424,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146468: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146468,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146487
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146490: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146490,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146512: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146512,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146531
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146534: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146534,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146553
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146556: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146556,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146575
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146578: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146578,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146600: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146600,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146641
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146644: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146644,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146666: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146666,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146688: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146688,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146707
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146710: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146710,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146729
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146732: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146732,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146773
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146776: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146776,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146784
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146795
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146798: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146798,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146817
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146820: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146820,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146839
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146842: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146842,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146886: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146886,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146905
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146908: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146908,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146927
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146930: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146930,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146949
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146952: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146952,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146982
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:146993
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:146996: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",146996,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147015
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147018: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147018,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147037
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147040: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147040,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147059
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147062: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147062,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147103
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147106: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147106,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147125
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147128: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147128,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147147
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147150: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147150,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147169
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147172: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147172,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147213
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147216: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147216,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147238: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147238,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147257
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147260: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147260,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147279
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147282: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147282,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147323
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147326: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147326,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147367
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147370: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147370,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147389
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147392: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147392,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147433
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147436: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147436,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147455
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147458: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147458,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147521
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147524: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147524,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147587
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147590: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147590,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147609
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147612: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147612,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147675
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147678: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147678,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147697
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147700: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147700,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147763
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147766: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147766,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147840
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147851
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147854: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147854,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147873
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147876: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147876,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:147939
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:147942: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",147942,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148052: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148052,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148071
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148074: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148074,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148096: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148096,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148115
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148118: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148118,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148137
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148140: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148140,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148159
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148162: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148162,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148203
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148206: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148206,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148228: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148228,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_870))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148269
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_870))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148272: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148272,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148280
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148291
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148294: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148294,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148313
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148316: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148316,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148335
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148338: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148338,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:30:13)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:148357
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:148360: Assertion failed in %NTestHarness.dut.ww.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",148360,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149245
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149245
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149256
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149259: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149259,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149267
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149278
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149281: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149281,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149311
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149322
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149325: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149325,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149333
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149344
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149347: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149347,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149355
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149366
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149369: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149369,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149377
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149388
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149391: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149391,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149399
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149410
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149413: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149413,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149421
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149432
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149435: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149435,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149443
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149454
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149457: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149457,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149487
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149498
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149501: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149501,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149509
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149520
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149523: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149523,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149531
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149542
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149545: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149545,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149553
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149564
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149567: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149567,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149575
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149586
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149589: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149589,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149597
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149608
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149611: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149611,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149619
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149630
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149633: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149633,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149663
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149674
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149677: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149677,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149685
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149696
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149699: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149699,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149707
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149718
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149721: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149721,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149729
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149740
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149743: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149743,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149751
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149762
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149765: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149765,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149795
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149806
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149809: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149809,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149817
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149828
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149831: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149831,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149839
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149850
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149853: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149853,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149861
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149872
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149875: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149875,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149905
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149916
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149919: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149919,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149927
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149938
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149941: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149941,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149949
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149960
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149963: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149963,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149971
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:149982
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:149985: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",149985,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150015
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150026
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150029: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150029,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150037
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150048
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150051: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150051,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150059
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150070
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150073: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150073,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150081
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150092
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150095: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150095,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150125
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150136
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150139: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150139,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150147
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150158
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150161: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150161,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150169
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150180
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150183: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150183,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150191
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150202
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150205: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150205,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150235
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150246
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150249: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150249,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150257
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150268
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150271: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150271,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150279
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150290
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150293: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150293,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150301
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150312
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150315: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150315,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150345
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150356
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150359: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150359,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150389
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150400
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150403: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150403,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150411
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150422
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150425: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150425,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150455
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150466
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150469: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150469,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150477
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150488
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150491: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150491,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150543
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150554
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150557: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150557,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150609
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150620
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150623: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150623,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150631
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150642
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150645: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150645,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150697
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150708
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150711: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150711,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150719
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150730
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150733: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150733,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150785
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150796
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150799: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150799,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150873
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150884
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150887: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150887,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150895
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150906
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150909: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150909,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:150972
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:150975: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",150975,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151082
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151085: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151085,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151093
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151104
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151107: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151107,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151126
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151129: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151129,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151148
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151151: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151151,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151170
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151173: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151173,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151192
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151195: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151195,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151236
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151239: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151239,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151258
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151261: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151261,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_870))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151302
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_870))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151305: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151305,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151324
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151327: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151327,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151346
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151349: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151349,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151368
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151371: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151371,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:51:18)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:151390
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:151393: Assertion failed in %NTestHarness.dut.mbus.memory_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",151393,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152384
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152384
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152395
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152398: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152398,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152417
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152420: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152420,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152450
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152461
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152464: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152464,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152472
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152483
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152486: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152486,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152494
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152505
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152508: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152508,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152516
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152527
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152530: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152530,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152538
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152549
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152552: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152552,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152560
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152571
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152574: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152574,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152596: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152596,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152637
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152640: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152640,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152648
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152659
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152662: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152662,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152681
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152684: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152684,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152703
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152706: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152706,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152725
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152728: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152728,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152747
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152750: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152750,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152758
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152769
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152772: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152772,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152802
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152813
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152816: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152816,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152835
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152838: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152838,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152857
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152860: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152860,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152868
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152879
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152882: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152882,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152890
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152901
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152904: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152904,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152945
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152948: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152948,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152967
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152970: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152970,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152978
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:152989
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:152992: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",152992,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153000
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153011
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153014: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153014,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153044
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153055
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153058: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153058,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153066
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153077
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153080: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153080,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153088
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153099
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153102: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153102,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153110
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153121
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153124: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153124,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153154
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153165
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153168: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153168,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153176
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153187
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153190: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153190,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153198
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153209
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153212: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153212,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153220
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153231
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153234: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153234,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153264
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153275
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153278: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153278,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153286
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153297
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153300: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153300,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153308
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153319
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153322: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153322,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153330
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153341
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153344: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153344,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153374
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153385
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153388: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153388,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153396
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153407
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153410: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153410,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153418
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153429
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153432: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153432,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153440
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153451
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153454: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153454,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153484
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153495
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153498: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153498,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153528
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153539
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153542: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153542,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153550
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153561
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153564: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153564,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153594
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153605
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153608: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153608,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153616
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153627
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153630: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153630,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153682
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153693
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153696: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153696,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153748
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153759
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153762: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153762,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153770
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153781
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153784: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153784,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153836
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153847
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153850: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153850,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153858
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153869
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153872: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153872,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153924
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:153935
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:153938: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",153938,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154012
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154023
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154026: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154026,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154034
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154045
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154048: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154048,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154100
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154111
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154114: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154114,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154210
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154221
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154224: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154224,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154232
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154243
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154246: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154246,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154254
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154265
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154268: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154268,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154276
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154287
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154290: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154290,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154298
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154309
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154312: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154312,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154320
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154331
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154334: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154334,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154364
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154375
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154378: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154378,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154386
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154397
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154400: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154400,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154430
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154441
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154444: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154444,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154452
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154463
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154466: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154466,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154474
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154485
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154488: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154488,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154496
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154507
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154510: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154510,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154518
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:51:38)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:154529
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:154532: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",154532,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155417
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155417
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155428
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155431: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155431,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155439
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155450
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155453: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155453,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155483
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155494
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155497: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155497,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155505
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155516
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155519: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155519,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155527
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155538
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155541: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155541,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155549
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155560
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155563: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155563,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155571
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155582
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155585: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155585,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155593
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155604
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155607: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155607,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155615
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155626
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155629: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155629,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155659
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155670
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155673: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155673,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155681
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155692
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155695: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155695,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155703
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155714
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155717: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155717,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155725
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155736
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155739: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155739,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155747
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155758
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155761: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155761,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155769
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155780
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155783: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155783,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155791
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155802
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155805: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155805,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155835
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155846
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155849: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155849,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155857
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155868
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155871: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155871,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155879
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155890
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155893: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155893,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155901
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155912
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155915: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155915,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155923
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155934
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155937: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155937,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155967
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155978
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:155981: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",155981,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:155989
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156000
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156003: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156003,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156011
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156022
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156025: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156025,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156033
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156044
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156047: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156047,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156077
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156088
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156091: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156091,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156099
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156110
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156113: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156113,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156121
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156132
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156135: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156135,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156143
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156154
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156157: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156157,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156187
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156198
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156201: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156201,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156209
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156220
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156223: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156223,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156231
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156242
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156245: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156245,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156253
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156264
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156267: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156267,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156297
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156308
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156311: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156311,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156319
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156330
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156333: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156333,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156341
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156352
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156355: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156355,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156363
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156374
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156377: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156377,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156407
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156418
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156421: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156421,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156429
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156440
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156443: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156443,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156451
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156462
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156465: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156465,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156473
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156484
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156487: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156487,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156517
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156528
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156531: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156531,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156561
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156572
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156575: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156575,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156583
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156594
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156597: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156597,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156627
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156638
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156641: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156641,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156649
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156660
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156663: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156663,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156715
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156726
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156729: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156729,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156781
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156792
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156795: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156795,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156803
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156814
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156817: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156817,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156869
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156880
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156883: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156883,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156891
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156902
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156905: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156905,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156957
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:156968
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:156971: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",156971,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157056
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157059: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157059,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157078
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157081: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157081,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157133
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157144
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157147: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157147,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157254
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157257: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157257,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157276
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157279: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157279,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157298
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157301: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157301,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157320
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157323: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157323,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157342
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157345: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157345,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157364
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157367: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157367,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157408
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157411: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157411,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157430
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157433: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157433,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_870))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157474
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_870))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157477: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157477,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157496
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157499: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157499,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157518
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157521: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157521,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157540
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157543: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157543,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BaseSubsystem.scala:69:113)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:157562
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:157565: Assertion failed in %NTestHarness.dut.mbus.coupler_from_coherence_manager_with_no_name.filter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",157565,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176568
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176568
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176579
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176582: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176582,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176604: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176604,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176645
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176648: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176648,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176667
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176670: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176670,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176689
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176692: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176692,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176711
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176714: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176714,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176733
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176736: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176736,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176755
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176758: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176758,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176777
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176780: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176780,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176821
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176824: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176824,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176843
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176846: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176846,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176868: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176868,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176890: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176890,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176912: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176912,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176934: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176934,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176953
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:176956: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",176956,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:176997
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177000: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177000,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177019
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177022: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177022,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177041
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177044: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177044,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177063
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177066: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177066,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177085
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177088: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177088,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177129
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177132: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177132,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177151
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177154: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177154,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177173
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177176: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177176,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177195
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_261))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177198: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177198,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177239
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177242: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177242,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177261
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177264: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177264,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177283
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177286: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177286,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177305
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177308: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177308,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177349
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177352: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177352,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177371
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177374: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177374,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177393
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177396: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177396,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177418: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177418,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177459
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177462: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177462,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177470
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177481
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					     >> 0x13U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177484: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177484,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177492
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177503
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177506: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177506,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177514
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177525
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177528: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177528,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177558
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177569
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177572: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177572,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177580
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177591
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177594: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177594,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177602
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177613
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[3U] 
					  >> 0x16U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1071[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177616: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177616,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177624
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177635
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177638: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177638,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177668
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177679
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177682: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177682,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177723
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177726: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177726,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177734
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177745
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177748: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177748,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177789
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177792: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177792,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177811
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177814: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177814,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177877
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177880: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177880,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177943
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177946: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177946,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:177965
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:177968: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",177968,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178020
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178031
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178034: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178034,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178042
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178053
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178056: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178056,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178119
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178122: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178122,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178196
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178207
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_626))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178210: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178210,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178229
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178232: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178232,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178284
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178295
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
			     | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178298: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178298,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178405
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178408: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178408,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178416
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178427
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178430: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178430,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178438
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178449
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178452: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178452,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178460
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178471
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178474: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178474,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178482
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178493
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178496: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178496,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178504
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178515
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178518: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178518,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178548
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178559
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178562: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178562,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178570
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178581
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178584: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178584,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178614
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178625
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178628: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178628,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178636
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178647
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_730) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178650: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178650,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178658
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178669
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_800) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178672: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178672,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178680
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178691
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178694: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178694,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178702
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:178713
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:178716: Assertion failed in %NTestHarness.dut.mbus.coupler_to_memory_controller_named_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",178716,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:134798
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:134798
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_618))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:167 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:134809
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_618))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:134812: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",134812,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:134820
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_636))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:176 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:134831
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_636))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:134834: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",134834,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:305370
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:305370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_498))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:167 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:305381
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_498))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:305384: Assertion failed in %NTestHarness.mem.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",305384,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:305392
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_516))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:176 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:305403
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_516))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:305406: Assertion failed in %NTestHarness.mem.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",305406,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__ram_rd__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223145
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_437))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223156
done_reset	
    ) {
	if (VL_UNLIKELY(((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_437))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223159: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223159,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			 & (~ ((0U == (0x3fU & (IData)(
						       (VL_ULL(0xffffffffc0) 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223200
done_reset	
    ) {
	if (VL_UNLIKELY(((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			 & (~ ((0U == (0x3fU & (IData)(
						       (VL_ULL(0xffffffffc0) 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223203: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223203,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223827
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223838
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223841: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223841,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223871
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223882
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223885: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223885,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223893
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223904
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223907: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223907,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223915
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223926
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223929: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223929,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223937
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:223948
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:223951: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",223951,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224003
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224014
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224017: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224017,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224025
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224036
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224039: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224039,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224047
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224058
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224061: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224061,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224069
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224080
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224083: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224083,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224157
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224168
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224171: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224171,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224179
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224190
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224193: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224193,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224201
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224212
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224215: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224215,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224223
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1126))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224234
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1126))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224237: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224237,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224289
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224300
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224303: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224303,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224311
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224322
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224325: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224325,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224377
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224388
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224391: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224391,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224399
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1126))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224410
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1126))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224413: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224413,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224465
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224476
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224479: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224479,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224487
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224498
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224501: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224501,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224685
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1244))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1295))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224696
done_reset	
    ) {
	if (VL_UNLIKELY((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1244))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1295))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224699: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224699,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224707
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224718
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1345))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224721: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224721,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224729
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1350))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224740
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1350))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224743: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224743,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224751
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1355))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224762
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1355))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224765: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224765,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224795
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1365))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224806
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1365))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224809: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224809,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224817
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1370))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224828
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1370))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224831: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224831,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224839
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1440) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1377)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224850
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1440) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1377)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224853: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224853,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224861
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1464) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1471))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224872
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1464) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1471))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224875: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224875,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224883
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1481))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224894
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1481))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224897: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224897,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224905
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1500))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at LazyRoCC.scala:75:59)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:224916
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1500))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:224919: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",224919,"");
	}
    }
}
