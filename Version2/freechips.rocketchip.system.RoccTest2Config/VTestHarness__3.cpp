// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__21(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__21\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52323
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52323
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52334
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52337: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52337,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52345
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_582))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52356
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_582))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52359: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52359,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52367
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_615))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52378
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_615))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52381: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52381,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52389
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_624))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52400
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_624))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52403: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52403,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52411
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_657))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52422
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_657))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52425: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52425,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52433
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_666))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52444
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_666))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52447: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52447,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52455
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_699))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52466
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_699))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52469: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52469,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52477
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_708))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52488
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_708))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52491: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52491,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52499
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_741))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52510
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_741))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52513: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52513,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52521
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_750))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52532
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_750))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52535: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52535,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52543
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_783))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52554
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_783))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52557: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52557,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52565
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_792))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:52576
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_792))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:52579: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",52579,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:106472
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:106472
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_436))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:280 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:106483
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_436))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:106486: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_bootrom.fragmenter\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",106486,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74939
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74939
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74950
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:74953: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",74953,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74972
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:74975: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",74975,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74983
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:74994
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:74997: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",74997,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75005
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75016
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75019: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75019,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75027
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75038
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75041: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75041,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75049
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75060
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75063: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75063,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75082
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75085: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75085,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75093
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75104
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75107: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75107,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75126
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75129: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75129,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75148
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75151: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75151,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75170
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75173: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75173,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75192
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75195: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75195,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75214
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75217: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75217,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75236
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75239: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75239,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75258
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75261: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75261,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75269
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75280
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75283: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75283,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75302
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75305: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75305,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_510))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75324
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_510))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75327: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75327,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75346
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75349: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75349,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75368
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75371: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75371,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75390
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75393: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75393,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75412
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75415: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75415,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75423
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75434
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75437: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75437,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75445
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_590))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75456
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_590))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75459: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75459,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75478
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75481: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75481,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75489
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75500
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75503: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75503,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75511
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75522
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75525: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75525,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75533
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75544
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75547: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75547,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75555
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_590))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75566
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_590))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75569: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75569,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75577
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75588
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75591: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75591,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75610
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75613: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75613,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75621
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75632
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75635: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75635,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75643
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_686))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75654
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_686))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75657: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75657,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75665
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_741))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75676
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_741))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75679: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75679,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75687
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75698
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75701: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75701,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75709
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75720
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75723: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75723,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75731
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75742
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75745: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75745,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75753
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75764
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75767: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75767,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75775
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_741))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75786
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_741))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75789: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75789,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75797
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75808
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75811: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75811,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75819
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75830
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75833: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75833,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75841
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75852
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75855: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75855,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75863
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75874
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75877: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75877,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75885
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75896
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75899: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75899,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75907
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75918
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75921: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75921,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75929
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75940
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75943: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75943,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75951
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75962
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75965: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75965,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75973
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75984
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:75987: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",75987,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:75995
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76006
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76009: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76009,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76017
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76028
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76031: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76031,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76039
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76050
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76053: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76053,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76061
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76072
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76075: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76075,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76083
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76094
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76097: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76097,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76105
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76116
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76119: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76119,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76127
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76138
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76141: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76141,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76149
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76160
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76163: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76163,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76171
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76182
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76185: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76185,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76193
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76204
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76207: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76207,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76215
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76226
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76229: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76229,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76237
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76248
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76251: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76251,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76259
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:278 assert (deny_put_ok || !bundle.denied, \"'D' channel Grant is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76270
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76273: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76273,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76281
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76292
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76295: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76295,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76303
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76314
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76317: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76317,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76325
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76336
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76339: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76339,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76347
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76358
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76361: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76361,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76369
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76380
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76383: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76383,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76391
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76402
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76405: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76405,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76413
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76424
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76427: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76427,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76435
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76446
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76449: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76449,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76457
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76468
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76471: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76471,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76479
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76490
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76493: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76493,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76501
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:296 assert (deny_put_ok || !bundle.denied, \"'D' channel AccessAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76512
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76515: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76515,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76523
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76534
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76537: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76537,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76545
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76556
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76559: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76559,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76567
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76578
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76581: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76581,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76589
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76600
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76603: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76603,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76611
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76622
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76625: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76625,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76633
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76644
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76647: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76647,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76655
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76666
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76669: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76669,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76677
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:312 assert (deny_put_ok || !bundle.denied, \"'D' channel HintAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76688
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76691: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76691,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76765
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76776
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76779: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76779,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76787
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1218))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76798
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1218))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76801: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76801,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76809
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1223))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76820
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1223))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76823: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76823,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76831
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1228))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76842
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1228))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76845: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76845,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76853
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1233))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76864
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1233))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76867: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76867,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76875
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1283))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76886
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1283))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76889: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76889,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76897
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1288))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76908
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1288))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76911: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76911,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76919
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1293))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76930
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1293))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76933: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76933,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76941
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1298))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76952
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1298))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76955: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76955,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76963
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1303))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76974
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1303))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76977: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76977,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76985
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1308))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:76996
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1308))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:76999: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",76999,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77007
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1168) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1330))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77018
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1168) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1330))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:77021: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",77021,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77029
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1238) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1358))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77040
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1238) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1358))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1409))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:77043: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",77043,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77051
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1419))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77062
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1419))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:77065: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",77065,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77073
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1438))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:77084
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1438))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:77087: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",77087,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214675
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214675
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract))) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn)) 
			 & (~ ((0U == (0x3ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
							 >> 0x20U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected 'GOING' hart.\n    at Debug.scala:793 assert(hartGoingId === 0.U, \"Unexpected 'GOING' hart.\")//Chisel3 #540 %%h, expected %%h\", hartGoingId, 0.U)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214686
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract))) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn)) 
			 & (~ ((0U == (0x3ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
							 >> 0x20U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:214689: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",214689,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214719
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
			    & (1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
			   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn)) 
			 & (~ ((0U == (0x3ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
							 >> 0x20U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected 'EXCEPTION' hart\n    at Debug.scala:1029 assert(hartExceptionId === 0.U, \"Unexpected 'EXCEPTION' hart\")//Chisel3 #540, %%h, expected %%h\", hartExceptionId, 0.U)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214730
done_reset	
    ) {
	if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
			    & (1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
			   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn)) 
			 & (~ ((0U == (0x3ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
							 >> 0x20U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:214733: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",214733,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214741
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96109))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected EXCEPTION write: should only get it in Debug Module EXEC state\n    at Debug.scala:1040 assert ((!hartExceptionWrEn || ctrlStateReg === CtrlState(Exec)),\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214752
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96109))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:214755: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",214755,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:51081
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:51084
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:51087
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:78956
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:78956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1186))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:78967
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1186))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:78970: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",78970,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:78978
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1195))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:78989
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1195))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:78992: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",78992,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra__v0 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11115
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2476))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11126
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2476))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11129: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11129,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2485))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11148
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2485))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11151: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11151,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2660))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11192
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2660))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11195: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11195,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2669))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11214
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2669))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11217: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11217,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2806))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11258
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2806))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11261: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11261,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11302
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11305: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11305,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2990))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11346
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2990))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11349: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11349,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2999))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11368
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2999))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11371: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11371,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3174))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11412
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3174))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11415: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11415,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11423
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3183))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11434
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3183))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11437: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11437,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11478
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11481: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11481,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11489
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3401))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11500
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3401))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11503: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11503,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11533
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3596))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11544
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3596))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11547: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11547,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11577
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3735))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11588
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3735))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11591: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11591,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:11610
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:11613: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",11613,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180724
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180724
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180735
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180738: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180738,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180746
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180757
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180760: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180760,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180768
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180779
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180782: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180782,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180790
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180801
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180804: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180804,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180812
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180823
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180826: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180826,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180834
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180845
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180848: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180848,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180856
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180867
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180870: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180870,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180878
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180889
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180892: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180892,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180900
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180911
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180914: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180914,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180922
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180933
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180936: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180936,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180944
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180955
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180958: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180958,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180966
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180977
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:180980: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",180980,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180988
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:180999
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181002: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181002,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181010
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181021
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181024: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181024,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181032
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181043
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181046: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181046,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181054
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181065
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181068: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181068,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181076
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181087
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181090: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181090,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181098
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181109
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181112: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181112,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181120
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181131
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181134: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181134,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181142
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181153
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181156: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181156,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181164
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181175
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181178: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181178,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181186
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181197
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181200: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181200,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181208
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181219
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181222: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181222,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181230
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181241
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181244: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181244,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181252
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181263
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181266: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181266,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181274
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181285
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181288: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181288,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181296
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181307
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181310: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181310,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181318
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181329
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181332: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181332,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181340
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181351
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (0x1c000000U 
				       & (0xc000000U 
					  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181354: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181354,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181362
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181373
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181376: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181376,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181384
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181395
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181398: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181398,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181417
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181420: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181420,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181428
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181439
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181442: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181442,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181450
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181461
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181464: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181464,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181472
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181483
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181486: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181486,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181494
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181505
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181508: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181508,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181516
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181527
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181530: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181530,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181538
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181549
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181552: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181552,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181560
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181571
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181574: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181574,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181596: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181596,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181604
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181615
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181618: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181618,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181637
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181640: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181640,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181648
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181659
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181662: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181662,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181681
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181684: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181684,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181703
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ ((0x13fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181706: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181706,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181725
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181728: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181728,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181747
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181750: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181750,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181758
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181769
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181772: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181772,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181780
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181791
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181794: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181794,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181802
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181813
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181816: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181816,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181835
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181838: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181838,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181912
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181923
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181926: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181926,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181945
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181948: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181948,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:181967
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:181970: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",181970,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182066
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182077
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182080: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182080,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182088
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182099
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182102: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182102,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182110
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182121
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182124: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182124,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182220
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182231
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182234: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182234,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182308
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182319
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182322: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182322,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182396
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182407
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x13fU >= (0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182410: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182410,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182550
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_775))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182561
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_775))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182564: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182564,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182572
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182583
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182586: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182586,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182594
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182605
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182608: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182608,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182616
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_790))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182627
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_790))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182630: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182630,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182638
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_795))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182649
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_795))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182652: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182652,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182660
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182671
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182674: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182674,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182704
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_855))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182715
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_855))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182718: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182718,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182726
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_860))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182737
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_860))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182740: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182740,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182792
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_950))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182803
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_950))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182806: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182806,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182814
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_800) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_971))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182825
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_800) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_920))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_971))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182828: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182828,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182836
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_981))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182847
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_981))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182850: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182850,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182858
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:182869
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:182872: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",182872,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61712
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61723
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61726: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61726,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61734
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61745
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61748: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61748,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61756
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61767
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61770: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61770,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61789
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61792: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61792,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61811
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61814: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61814,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61822
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61833
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61836: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61836,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61844
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61855
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61858: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61858,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61877
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61880: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61880,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61888
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61899
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61902: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61902,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61910
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61921
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61924: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61924,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61943
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61946: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61946,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61965
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61968: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61968,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61976
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61987
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:61990: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",61990,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:61998
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62009
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62012: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62012,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62020
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62031
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62034: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62034,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62042
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62053
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62056: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62056,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62064
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62075
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62078: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62078,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62086
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62097
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62100: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62100,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62119
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62122: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62122,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62141
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62144: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62144,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62152
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62163
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62166: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62166,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62174
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62185
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62188: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62188,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62196
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62207
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62210: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62210,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62229
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62232: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62232,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62240
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62251
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62254: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62254,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62262
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62273
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62276: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62276,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62284
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62295
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62298: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62298,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62306
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62317
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62320: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62320,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62328
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62339
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62342: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62342,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62350
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62361
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62364: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62364,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62372
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62383
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62386: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62386,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62405
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62408: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62408,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62416
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62427
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62430: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62430,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62438
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_567))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62449
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_567))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62452: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62452,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62460
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62471
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62474: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62474,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62482
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62493
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62496: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62496,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62504
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62515
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62518: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62518,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62526
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62537
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62540: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62540,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62548
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_567))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62559
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_567))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62562: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62562,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62570
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62581
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62584: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62584,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62592
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62603
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62606: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62606,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62614
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62625
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62628: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62628,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62636
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62647
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62650: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62650,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62658
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62669
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62672: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62672,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62680
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62691
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62694: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62694,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62702
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62713
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62716: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62716,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62724
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62735
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62738: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62738,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62746
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62757
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62760: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62760,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62768
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT__dut_reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62779
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT__dut_reset))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62782: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62782,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62790
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62801
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62804: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62804,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62812
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62823
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62826: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62826,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62834
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62845
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62848: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62848,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62856
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62867
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62870: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62870,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62878
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62889
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62892: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62892,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62900
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62911
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62914: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62914,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62922
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62933
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62936: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62936,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62944
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62955
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62958: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62958,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62966
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62977
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:62980: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",62980,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62988
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:62999
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63002: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63002,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63010
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63021
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63024: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63024,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63054
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63065
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63068: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63068,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63076
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63087
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63090: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63090,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63098
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63109
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63112: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63112,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63120
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63131
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63134: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63134,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63142
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63153
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63156: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63156,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63164
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63175
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63178: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63178,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63208
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63219
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63222: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63222,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63230
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63241
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63244: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63244,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63252
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63263
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63266: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63266,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63296
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63307
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63310: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63310,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63318
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63329
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63332: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63332,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63340
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63351
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63354: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63354,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63384
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63395
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63398: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63398,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63417
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63420: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63420,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63428
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63439
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63442: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63442,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63538
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_985))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63549
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_985))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63552: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63552,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63560
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_990))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63571
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_990))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63574: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63574,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_995))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_995))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63596: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63596,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63604
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63615
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1000))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63618: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63618,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1005))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63637
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1005))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63640: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63640,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63648
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1055))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63659
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1055))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63662: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63662,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1060))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63681
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1060))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63684: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63684,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1065))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63703
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1065))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63706: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63706,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1070))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63725
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1070))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63728: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63728,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1075))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63747
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1075))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63750: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63750,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63758
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1080))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63769
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1080))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63772: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63772,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63780
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_940) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1102))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1160))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63791
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_940) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1102))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1160))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63794: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63794,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63802
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1130))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63813
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1130))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63816: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63816,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63835
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63838: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63838,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1210))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:63857
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1210))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:63860: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",63860,"");
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56584
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56584
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56595
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56598: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56598,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56606
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56617
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56620: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56620,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56628
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56639
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56642: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56642,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56650
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56661
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56664: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56664,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56672
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56683
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56686: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56686,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56694
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56705
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56708: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56708,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56716
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56727
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56730: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56730,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56738
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:48 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56749
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56752: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56752,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56760
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56771
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56774: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56774,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56782
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56793
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_239))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56796: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56796,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56804
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56815
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56818: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56818,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56826
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56837
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					       >> 0xeU))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56840: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56840,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56848
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56859
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56862: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56862,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56870
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56881
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56884: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56884,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56892
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56903
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56906: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56906,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56914
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:59 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56925
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (0xffU & (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[2U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56928: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56928,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56936
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:60 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56947
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56950: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56950,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56958
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56969
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_429))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56972: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56972,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56980
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:56991
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:56994: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",56994,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57002
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57013
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57016: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57016,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57024
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:67 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57035
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57038: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57038,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57046
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:68 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57057
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57060: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57060,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57068
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:69 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57079
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57082: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57082,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57090
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57101
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57104: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57104,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57112
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57123
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57126: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57126,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57134
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:75 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57145
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57148: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57148,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57156
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:76 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57167
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57170: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57170,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57178
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:77 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57189
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57192: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57192,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57200
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57211
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57214: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57214,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57222
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57233
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57236: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57236,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57244
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:83 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57255
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57258: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57258,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57266
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:84 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57277
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57280: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57280,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57288
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:85 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57299
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57302: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57302,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57310
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57321
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57324: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57324,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57332
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57343
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57346: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57346,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57354
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:91 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57365
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57368: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57368,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57376
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:92 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57387
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57390: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57390,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:93 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57409
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57412: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57412,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57420
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57431
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57434: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57434,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57453
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57456: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57456,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:99 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57475
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57478: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57478,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57486
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:100 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57497
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57500: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57500,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:101 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57519
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57522: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57522,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57541
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57544: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57544,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:106 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57563
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_243))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57566: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57566,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:107 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57585
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57588: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57588,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:108 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57607
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_448))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57610: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57610,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57618
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:109 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57629
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
					  >> 0x15U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U]) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57632: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57632,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT__dut_reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57651
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT__dut_reset))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57654: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57654,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57662
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:264 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57673
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57676: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57676,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:265 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57695
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57698: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57698,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57706
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:266 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57717
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57720: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57720,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57739
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57742: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57742,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57750
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:268 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57761
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57764: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57764,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:272 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57783
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57786: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57786,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57794
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:273 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57805
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57808: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57808,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57827
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57830: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57830,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57838
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:275 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57849
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57852: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57852,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:276 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57871
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57874: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57874,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57882
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57893
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57896: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57896,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:282 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57937
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57940: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57940,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57948
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:283 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57959
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut_reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57962: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57962,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57981
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:57984: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",57984,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:57992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:285 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58003
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58006: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58006,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:286 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58025
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58028: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58028,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_824))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:287 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58047
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_824))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58050: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58050,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58069
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58072: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58072,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:292 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58091
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58094: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58094,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:294 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58113
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58116: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58116,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:295 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58135
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58138: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58138,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:300 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58179
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58182: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58182,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:302 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58201
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58204: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58204,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_824))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:303 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58223
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_824))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58226: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58226,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:304 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58245
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58248: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58248,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:308 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58267
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58270: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58270,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:310 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58289
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58292: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58292,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:311 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58311
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut_reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58314: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58314,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_973))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:343 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_973))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58424: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58424,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_978))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:344 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_978))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58446: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58446,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_983))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:345 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_983))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58468: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58468,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_988))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:346 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58487
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_988))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58490: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58490,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_993))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:347 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_993))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58512: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58512,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:413 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58531
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58534: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58534,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1048))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:414 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58553
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1048))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58556: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58556,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1053))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:415 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58575
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1053))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58578: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58578,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1058))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:416 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58597
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1058))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58600: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58600,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1063))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:417 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58619
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1063))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58622: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58622,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:418 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58641
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58644: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58644,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_928) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1090))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1148))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:448 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_928) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1090))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1148))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58666: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58666,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_998) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1118))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1169))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:455 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58685
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_998) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1118))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1169))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58688: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58688,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1179))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 5 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:459 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58707
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1179))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58710: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58710,"");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:467 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:58729
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.RoccTest2Config.v:58732: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v",58732,"");
	}
    }
}
