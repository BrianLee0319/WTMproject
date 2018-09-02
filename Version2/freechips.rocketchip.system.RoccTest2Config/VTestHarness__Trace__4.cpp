// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__156(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9405,(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_305) 
				> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_1))));
	vcdp->chgBit  (c+9406,(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_300) 
				> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0))));
	vcdp->chgBus  (c+9407,(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0),2);
	vcdp->chgBus  (c+9408,(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_1),2);
    }
}

void VTestHarness::traceChgThis__157(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9409,(vlTOPp->clock));
	vcdp->chgBit  (c+9410,(vlTOPp->reset));
	vcdp->chgBit  (c+9411,(vlTOPp->io_success));
	vcdp->chgBit  (c+9412,((1U & (~ (IData)(vlTOPp->reset)))));
    }
}
