// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestHarness) {
    VTestHarness__Syms* __restrict vlSymsp = __VlSymsp = new VTestHarness__Syms(this, name());
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, VTestHarness___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestHarness::__Vconfigure(VTestHarness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestHarness::~VTestHarness() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestHarness::_initial__TOP__1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_initial__TOP__1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,159,0,5);
    //char	__VpadToAlign28[4];
    VL_SIGW(__Vtemp2,159,0,5);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp3,159,0,5);
    //char	__VpadToAlign76[4];
    VL_SIGW(__Vtemp4,159,0,5);
    //char	__VpadToAlign100[4];
    VL_SIGW(__Vtemp5,159,0,5);
    //char	__VpadToAlign124[4];
    VL_SIGW(__Vtemp6,159,0,5);
    //char	__VpadToAlign148[4];
    VL_SIGW(__Vtemp7,159,0,5);
    //char	__VpadToAlign172[4];
    VL_SIGW(__Vtemp8,159,0,5);
    //char	__VpadToAlign196[4];
    VL_SIGW(__Vtemp9,159,0,5);
    //char	__VpadToAlign220[4];
    VL_SIGW(__Vtemp10,159,0,5);
    //char	__VpadToAlign244[4];
    VL_SIGW(__Vtemp11,159,0,5);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp12,159,0,5);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp13,159,0,5);
    //char	__VpadToAlign316[4];
    VL_SIGW(__Vtemp14,159,0,5);
    //char	__VpadToAlign340[4];
    VL_SIGW(__Vtemp15,159,0,5);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp16,159,0,5);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp17,159,0,5);
    //char	__VpadToAlign412[4];
    VL_SIGW(__Vtemp18,159,0,5);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp19,159,0,5);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp20,159,0,5);
    //char	__VpadToAlign484[4];
    VL_SIGW(__Vtemp21,159,0,5);
    //char	__VpadToAlign508[4];
    VL_SIGW(__Vtemp22,159,0,5);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp23,159,0,5);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp24,159,0,5);
    //char	__VpadToAlign580[4];
    VL_SIGW(__Vtemp25,159,0,5);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp26,159,0,5);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp27,159,0,5);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp28,159,0,5);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp29,159,0,5);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp30,159,0,5);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp31,159,0,5);
    //char	__VpadToAlign748[4];
    VL_SIGW(__Vtemp32,159,0,5);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp33,159,0,5);
    //char	__VpadToAlign796[4];
    VL_SIGW(__Vtemp34,159,0,5);
    //char	__VpadToAlign820[4];
    VL_SIGW(__Vtemp35,159,0,5);
    //char	__VpadToAlign844[4];
    VL_SIGW(__Vtemp36,159,0,5);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp37,159,0,5);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp38,159,0,5);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp39,159,0,5);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp40,159,0,5);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp41,159,0,5);
    //char	__VpadToAlign988[4];
    VL_SIGW(__Vtemp42,159,0,5);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp43,159,0,5);
    //char	__VpadToAlign1036[4];
    VL_SIGW(__Vtemp44,159,0,5);
    //char	__VpadToAlign1060[4];
    VL_SIGW(__Vtemp45,159,0,5);
    //char	__VpadToAlign1084[4];
    VL_SIGW(__Vtemp46,159,0,5);
    //char	__VpadToAlign1108[4];
    VL_SIGW(__Vtemp47,159,0,5);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp48,159,0,5);
    //char	__VpadToAlign1156[4];
    VL_SIGW(__Vtemp49,159,0,5);
    //char	__VpadToAlign1180[4];
    VL_SIGW(__Vtemp50,159,0,5);
    //char	__VpadToAlign1204[4];
    VL_SIGW(__Vtemp51,159,0,5);
    // Body
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp1),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp2),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp3),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp4),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp5),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp6),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp7),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp8),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp9),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp10),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp11),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp12),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp13),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp14),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp15),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp16),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp17),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp18),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp19),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp20),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp21),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp22),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp23),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp24),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp25),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp26),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp27),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp28),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp29),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp30),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp31),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp32),
				vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp33),
				vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp34),
				vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp35),
				vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp36),
				vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp37),
				vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp38),
				vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp39[0U] = 0x743d2564U;
    __Vtemp39[1U] = 0x6d656f75U;
    __Vtemp39[2U] = 0x6b5f7469U;
    __Vtemp39[3U] = 0x656c696eU;
    __Vtemp39[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp39),
				vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp40[0U] = 0x743d2564U;
    __Vtemp40[1U] = 0x6d656f75U;
    __Vtemp40[2U] = 0x6b5f7469U;
    __Vtemp40[3U] = 0x656c696eU;
    __Vtemp40[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp40),
				vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp41[0U] = 0x743d2564U;
    __Vtemp41[1U] = 0x6d656f75U;
    __Vtemp41[2U] = 0x6b5f7469U;
    __Vtemp41[3U] = 0x656c696eU;
    __Vtemp41[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp41),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp42[0U] = 0x743d2564U;
    __Vtemp42[1U] = 0x6d656f75U;
    __Vtemp42[2U] = 0x6b5f7469U;
    __Vtemp42[3U] = 0x656c696eU;
    __Vtemp42[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp42),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp43[0U] = 0x743d2564U;
    __Vtemp43[1U] = 0x6d656f75U;
    __Vtemp43[2U] = 0x6b5f7469U;
    __Vtemp43[3U] = 0x656c696eU;
    __Vtemp43[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp43),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp44[0U] = 0x743d2564U;
    __Vtemp44[1U] = 0x6d656f75U;
    __Vtemp44[2U] = 0x6b5f7469U;
    __Vtemp44[3U] = 0x656c696eU;
    __Vtemp44[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp44),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp45[0U] = 0x743d2564U;
    __Vtemp45[1U] = 0x6d656f75U;
    __Vtemp45[2U] = 0x6b5f7469U;
    __Vtemp45[3U] = 0x656c696eU;
    __Vtemp45[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp45),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp46[0U] = 0x743d2564U;
    __Vtemp46[1U] = 0x6d656f75U;
    __Vtemp46[2U] = 0x6b5f7469U;
    __Vtemp46[3U] = 0x656c696eU;
    __Vtemp46[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp46),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp47[0U] = 0x743d2564U;
    __Vtemp47[1U] = 0x6d656f75U;
    __Vtemp47[2U] = 0x6b5f7469U;
    __Vtemp47[3U] = 0x656c696eU;
    __Vtemp47[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp47),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp48[0U] = 0x743d2564U;
    __Vtemp48[1U] = 0x6d656f75U;
    __Vtemp48[2U] = 0x6b5f7469U;
    __Vtemp48[3U] = 0x656c696eU;
    __Vtemp48[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp48),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp49[0U] = 0x743d2564U;
    __Vtemp49[1U] = 0x6d656f75U;
    __Vtemp49[2U] = 0x6b5f7469U;
    __Vtemp49[3U] = 0x656c696eU;
    __Vtemp49[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp49),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp50[0U] = 0x743d2564U;
    __Vtemp50[1U] = 0x6d656f75U;
    __Vtemp50[2U] = 0x6b5f7469U;
    __Vtemp50[3U] = 0x656c696eU;
    __Vtemp50[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp50),
				vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp51[0U] = 0x743d2564U;
    __Vtemp51[1U] = 0x6d656f75U;
    __Vtemp51[2U] = 0x6b5f7469U;
    __Vtemp51[3U] = 0x656c696eU;
    __Vtemp51[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp51),
				vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:288096
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vxrand2 
	= VL_RAND_RESET_Q(64);
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:288090
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vxrand1 
	= VL_RAND_RESET_Q(64);
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289426
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___RAND_85 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___RAND_86 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
}

void VTestHarness::_settle__TOP__2(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_settle__TOP__2\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len
	[0U];
}

void VTestHarness::_initial__TOP__39(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_initial__TOP__39\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign1268[4];
    VL_SIGW(__Vtemp309,159,0,5);
    // Body
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/plusarg_reader.v:17
    __Vtemp309[0U] = 0x733d2564U;
    __Vtemp309[1U] = 0x79636c65U;
    __Vtemp309[2U] = 0x72655f63U;
    __Vtemp309[3U] = 0x785f636fU;
    __Vtemp309[4U] = 0x6d61U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp309),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:56
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
}

void VTestHarness::_settle__TOP__40(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_settle__TOP__40\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp338,95,0,3);
    //char	__VpadToAlign1324[4];
    VL_SIGW(__Vtemp339,95,0,3);
    //char	__VpadToAlign1340[4];
    VL_SIGW(__Vtemp340,95,0,3);
    //char	__VpadToAlign1356[4];
    VL_SIGW(__Vtemp341,95,0,3);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp348,95,0,3);
    //char	__VpadToAlign1388[4];
    VL_SIGW(__Vtemp349,95,0,3);
    //char	__VpadToAlign1404[4];
    VL_SIGW(__Vtemp352,95,0,3);
    //char	__VpadToAlign1420[4];
    VL_SIGW(__Vtemp353,95,0,3);
    //char	__VpadToAlign1436[4];
    VL_SIGW(__Vtemp356,95,0,3);
    //char	__VpadToAlign1452[4];
    VL_SIGW(__Vtemp357,95,0,3);
    //char	__VpadToAlign1468[4];
    VL_SIGW(__Vtemp360,95,0,3);
    //char	__VpadToAlign1484[4];
    VL_SIGW(__Vtemp361,95,0,3);
    //char	__VpadToAlign1500[4];
    VL_SIGW(__Vtemp364,95,0,3);
    //char	__VpadToAlign1516[4];
    VL_SIGW(__Vtemp365,95,0,3);
    //char	__VpadToAlign1532[4];
    VL_SIGW(__Vtemp368,95,0,3);
    //char	__VpadToAlign1548[4];
    VL_SIGW(__Vtemp369,95,0,3);
    //char	__VpadToAlign1564[4];
    VL_SIGW(__Vtemp372,95,0,3);
    //char	__VpadToAlign1580[4];
    VL_SIGW(__Vtemp373,95,0,3);
    //char	__VpadToAlign1596[4];
    VL_SIGW(__Vtemp376,95,0,3);
    //char	__VpadToAlign1612[4];
    VL_SIGW(__Vtemp377,95,0,3);
    //char	__VpadToAlign1628[4];
    VL_SIGW(__Vtemp396,95,0,3);
    //char	__VpadToAlign1644[4];
    VL_SIGW(__Vtemp397,95,0,3);
    //char	__VpadToAlign1660[4];
    VL_SIGW(__Vtemp400,95,0,3);
    //char	__VpadToAlign1676[4];
    VL_SIGW(__Vtemp401,95,0,3);
    //char	__VpadToAlign1692[4];
    VL_SIGW(__Vtemp404,95,0,3);
    //char	__VpadToAlign1708[4];
    VL_SIGW(__Vtemp405,95,0,3);
    //char	__VpadToAlign1724[4];
    VL_SIGW(__Vtemp408,95,0,3);
    //char	__VpadToAlign1740[4];
    VL_SIGW(__Vtemp409,95,0,3);
    //char	__VpadToAlign1756[4];
    VL_SIGW(__Vtemp412,95,0,3);
    //char	__VpadToAlign1772[4];
    VL_SIGW(__Vtemp413,95,0,3);
    //char	__VpadToAlign1788[4];
    VL_SIGW(__Vtemp416,95,0,3);
    //char	__VpadToAlign1804[4];
    VL_SIGW(__Vtemp417,95,0,3);
    //char	__VpadToAlign1820[4];
    VL_SIGW(__Vtemp420,95,0,3);
    //char	__VpadToAlign1836[4];
    VL_SIGW(__Vtemp421,95,0,3);
    //char	__VpadToAlign1852[4];
    VL_SIGW(__Vtemp424,95,0,3);
    //char	__VpadToAlign1868[4];
    VL_SIGW(__Vtemp425,95,0,3);
    //char	__VpadToAlign1884[4];
    VL_SIGW(__Vtemp428,95,0,3);
    //char	__VpadToAlign1900[4];
    VL_SIGW(__Vtemp429,95,0,3);
    //char	__VpadToAlign1916[4];
    VL_SIGW(__Vtemp432,95,0,3);
    //char	__VpadToAlign1932[4];
    VL_SIGW(__Vtemp433,95,0,3);
    //char	__VpadToAlign1948[4];
    VL_SIGW(__Vtemp436,127,0,4);
    VL_SIGW(__Vtemp437,127,0,4);
    VL_SIGW(__Vtemp443,95,0,3);
    //char	__VpadToAlign1996[4];
    VL_SIGW(__Vtemp444,95,0,3);
    //char	__VpadToAlign2012[4];
    VL_SIGW(__Vtemp445,95,0,3);
    //char	__VpadToAlign2028[4];
    VL_SIGW(__Vtemp451,95,0,3);
    //char	__VpadToAlign2044[4];
    VL_SIGW(__Vtemp452,95,0,3);
    //char	__VpadToAlign2060[4];
    VL_SIGW(__Vtemp453,95,0,3);
    //char	__VpadToAlign2076[4];
    VL_SIGW(__Vtemp455,95,0,3);
    //char	__VpadToAlign2092[4];
    VL_SIGW(__Vtemp456,95,0,3);
    //char	__VpadToAlign2108[4];
    VL_SIGW(__Vtemp457,95,0,3);
    //char	__VpadToAlign2124[4];
    VL_SIGW(__Vtemp458,95,0,3);
    //char	__VpadToAlign2140[4];
    VL_SIGW(__Vtemp459,95,0,3);
    //char	__VpadToAlign2156[4];
    VL_SIGW(__Vtemp461,95,0,3);
    //char	__VpadToAlign2172[4];
    VL_SIGW(__Vtemp466,95,0,3);
    //char	__VpadToAlign2188[4];
    VL_SIGW(__Vtemp467,95,0,3);
    //char	__VpadToAlign2204[4];
    VL_SIGW(__Vtemp469,95,0,3);
    //char	__VpadToAlign2220[4];
    VL_SIGW(__Vtemp470,95,0,3);
    //char	__VpadToAlign2236[4];
    VL_SIGW(__Vtemp474,95,0,3);
    //char	__VpadToAlign2252[4];
    VL_SIGW(__Vtemp475,95,0,3);
    // Body
    vlTOPp->io_success = (1U == vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fexit);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_mask 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? 0xfU : ((1U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		       ? 0xfU : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? 0U : ((1U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		     ? 4U : 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address 
	= (0x1ffU & ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		      ? (0x1fcU & (vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
				   << 2U)) : ((1U == 
					       (3U 
						& vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
					       ? (0x1fcU 
						  & (vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
						     << 2U))
					       : 0x40U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero 
	= ((0U == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data)))
	    ? 0U : ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					     >> 8U))))
		     ? 1U : ((0U == (0xffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
						      >> 0x10U))))
			      ? 2U : ((0U == (0xffU 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
							 >> 0x18U))))
				       ? 3U : ((0U 
						== 
						(0xffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
							    >> 0x20U))))
					        ? 4U
					        : (
						   (0U 
						    == 
						    (0xffU 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								>> 0x28U))))
						    ? 5U
						    : 
						   ((0U 
						     == 
						     (0xffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								 >> 0x30U))))
						     ? 6U
						     : 7U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_943 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_927);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_943 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_927);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_844 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_840) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_846 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_840)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_844 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_840) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_846 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_840)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1385 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1369);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1276 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1272) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1278 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1272)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype) 
	    << 0x18U) | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_224 
	= ((0x8000U & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
			  << 0xfU) ^ (0xffff8000U & 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
				       << 0xdU))) ^ 
			(0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
					<< 0xcU))) 
		       ^ (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
					 << 0xaU)))) 
	   | (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1189 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1173);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1184 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1069) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1173 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1189 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1173);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1184 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1069) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1173 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_991 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_975);
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_986 
	= ((((0U == (((((((((vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[0U] 
			     | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[1U]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[2U]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[3U]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[4U]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[5U]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[6U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[7U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[8U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871[9U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_975 
	       < vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1417 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1401);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1412 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1299) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1401 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1193 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1193 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1177);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1193 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1193 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1177);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_995 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_979);
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_990 
	= ((((0U == (((((((((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[0U] 
			     | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[1U]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[2U]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[3U]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[4U]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[5U]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[6U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[7U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[8U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877[9U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_979 
	       < vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1375 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1359);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1370 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1257)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1359 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_995 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_979);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_990 
	= ((((0U == (((((((((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[0U] 
			     | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[1U]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[2U]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[3U]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[4U]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[5U]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[6U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[7U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[8U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877[9U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_979 
	       < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1505 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1489);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1505 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1489);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1443 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1427);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1443 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1427);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1203 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1187);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1203 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1187);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1215 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1199);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1210 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1087) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1199 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1427 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1411);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1422 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1299) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1411 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1443 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1427);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1203 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1187);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1203 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1187);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((((((((vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[0U] 
			     | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[1U]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[2U]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[3U]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[4U]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[5U]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[6U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[7U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[8U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[9U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1215 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1199);
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1210 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1087) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1199 
	       < vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1443 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1427);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1203 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1187);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1443 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1427);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1553 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1537);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1005 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_989);
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1396 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1392) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1398 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1392));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1396 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1392) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1398 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1392));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][0U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][1U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][2U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][3U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][0U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][1U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][2U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][3U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2708 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2692);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2708 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2692);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2708 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2692);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2708 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2692);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2248 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2232);
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2243 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2120) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2232 
	       < vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2708 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2692);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2600 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2584);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2595 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2472)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2584 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_139 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_185 
	= (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1154 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1126_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1159 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1126_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_377 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_373) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_379 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_373));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_205 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_201) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_201));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1337 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1331));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1335 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1331) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_178 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_174) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_180 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_174));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_350 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_352 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1631 
	= (5U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1635 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1637 
	= (7U & ((5U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
		  ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
		  : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1651 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1656 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___GEN_400 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_4
	    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_3
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_1
		        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][0U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][1U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
	= (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
		       [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][2U]
		        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   | (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_32 
					       << 1U)) 
		   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_bit0AlignedSigC))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((0xfffe0000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_32 
					   >> 0x30U)))
			     ? ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_highAlignedSigC)
			     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_highAlignedSigC) 
			   << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_32 
						      << 1U)) 
						  | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_bit0AlignedSigC))) 
						 >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= (0x7ffU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_32 
				     >> 0x30U))) ? 
		      ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_highAlignedSigC)
		       : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_highAlignedSigC) 
		     >> 0xfU));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_414 
	= (4U | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
			<< 1U)) | (0xfffffffU & ((0x1cU 
						  > 
						  (8U 
						   | (0x10U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
							 << 4U)))) 
						 & ((0xfffffffU 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
							<< 1U)) 
						    >> 
						    (2U 
						     | (1U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5383 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
	   & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
		  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_634 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wb_ctrl_toint));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag 
	= (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))) 
	   | ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_543 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_621 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_556 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_569 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_582 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_595 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_608 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr][0U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr][1U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
	= (0xffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren)
			 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
			[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr][2U]
			 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_351 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_345));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_349 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_345) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_324 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_322 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2164 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_invalidExc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6982 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5137 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5314 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6763 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4606 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6544 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5794 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4429 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59) 
	    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58) 
			  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57) 
					<< 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56))));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_invalidExc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sign)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sign))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sign)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sign))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_83) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_isNaN));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sign_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_103 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
		 >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_395 
	= (((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U]) 
	    << 5U) | ((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
		       ? (((0U != (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
					       << 0x10U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						 >> 0x10U)))) 
			   << 4U) | ((0U != (0xffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						 << 0x10U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0x10U))))
				      ? (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							>> 0x18U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							>> 0x18U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						     << 4U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x1cU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							 >> 0x1cU))))
						  ? 
						 ((0x80000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x40000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x1dU))))
						  : 
						 ((0x8000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x4000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x19U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						     << 0xcU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x14U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							 >> 0x14U))))
						  ? 
						 ((0x800000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x400000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x15U))))
						  : 
						 ((0x80000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x40000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0x11U))))))))
				      : (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							>> 8U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							>> 8U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						     << 0x14U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0xcU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						       << 0x14U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							 >> 0xcU))))
						  ? 
						 ((0x8000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x4000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 0xdU))))
						  : 
						 ((0x800U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x400U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 9U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						     << 0x1cU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 4U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
						       << 0x1cU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
							 >> 4U))))
						  ? 
						 ((0x80U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((0x40U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 5U))))
						  : 
						 ((8U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						   ? 3U
						   : 
						  ((4U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       >> 1U))))))))))
		       : (((0U != (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					       << 0x10U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						 >> 0x10U)))) 
			   << 4U) | ((0U != (0xffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						 << 0x10U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0x10U))))
				      ? (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							>> 0x18U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							>> 0x18U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						     << 4U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x1cU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							 >> 0x1cU))))
						  ? 
						 ((0x80000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x40000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x1dU))))
						  : 
						 ((0x8000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x4000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x19U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						     << 0xcU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x14U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							 >> 0x14U))))
						  ? 
						 ((0x800000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x400000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x15U))))
						  : 
						 ((0x80000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x40000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0x11U))))))))
				      : (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							>> 8U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							>> 8U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						     << 0x14U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0xcU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       << 0x14U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							 >> 0xcU))))
						  ? 
						 ((0x8000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x4000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 0xdU))))
						  : 
						 ((0x800U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x400U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 9U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						     << 0x1cU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 4U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						       << 0x1cU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
							 >> 4U))))
						  ? 
						 ((0x80U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((0x40U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 5U))))
						  : 
						 ((8U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						   ? 3U
						   : 
						  ((4U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						       >> 1U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1276 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1274 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_285 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_281));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_286 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_281 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_277)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_status_sd 
	= ((0U == (3U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)))) 
	   | (0U == (3U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_funct___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_funct
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_xd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_xd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__ram_rd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__ram_rd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_102 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
		 >> 0x1fU));
    __Vtemp338[0U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp338[1U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp338[2U] = (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U]);
    VL_EXTEND_WW(66,65, __Vtemp339, __Vtemp338);
    VL_EXTEND_WW(66,65, __Vtemp340, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp341, __Vtemp339, __Vtemp340);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[0U] 
	= __Vtemp341[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[1U] 
	= __Vtemp341[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U] 
	= (3U & __Vtemp341[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U] 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
	    << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
			 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[3U] 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
	    << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
			 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[4U] 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
		 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_598 
	= (((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U]) 
	    << 5U) | ((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
		       ? (((0U != (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
					       << 0x10U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						 >> 0x10U)))) 
			   << 4U) | ((0U != (0xffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						 << 0x10U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						   >> 0x10U))))
				      ? (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							>> 0x18U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							>> 0x18U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 4U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x1cU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							 >> 0x1cU))))
						  ? 
						 ((0x80000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x40000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x1dU))))
						  : 
						 ((0x8000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x4000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x19U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 0xcU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x14U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							 >> 0x14U))))
						  ? 
						 ((0x800000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x400000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x15U))))
						  : 
						 ((0x80000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x40000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0x11U))))))))
				      : (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							>> 8U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							>> 8U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 0x14U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0xcU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						       << 0x14U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							 >> 0xcU))))
						  ? 
						 ((0x8000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x4000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 0xdU))))
						  : 
						 ((0x800U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x400U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 9U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 0x1cU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 4U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						       << 0x1cU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
							 >> 4U))))
						  ? 
						 ((0x80U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((0x40U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 5U))))
						  : 
						 ((8U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						   ? 3U
						   : 
						  ((4U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       >> 1U))))))))))
		       : (((0U != (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
					       << 0x10U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						 >> 0x10U)))) 
			   << 4U) | ((0U != (0xffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						 << 0x10U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						   >> 0x10U))))
				      ? (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							>> 0x18U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							>> 0x18U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						     << 4U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x1cU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							 >> 0x1cU))))
						  ? 
						 ((0x80000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x40000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x1dU))))
						  : 
						 ((0x8000000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x4000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x19U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						     << 0xcU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x14U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							 >> 0x14U))))
						  ? 
						 ((0x800000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x400000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x15U))))
						  : 
						 ((0x80000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x40000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0x11U))))))))
				      : (((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							>> 8U)))) 
					  << 3U) | 
					 ((0U != (0xffU 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						      << 0x18U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							>> 8U))))
					   ? (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						     << 0x14U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0xcU)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       << 0x14U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							 >> 0xcU))))
						  ? 
						 ((0x8000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x4000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 0xdU))))
						  : 
						 ((0x800U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x400U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 9U))))))
					   : (((0U 
						!= 
						(0xfU 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						     << 0x1cU) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 4U)))) 
					       << 2U) 
					      | ((0U 
						  != 
						  (0xfU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						       << 0x1cU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
							 >> 4U))))
						  ? 
						 ((0x80U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((0x40U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 5U))))
						  : 
						 ((8U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						   ? 3U
						   : 
						  ((4U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])
						    ? 2U
						    : 
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
						       >> 1U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi)
	    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U])) 
		<< 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
			      << 0x1fU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
					   >> 1U)))
	    : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4027 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3823 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
	      >> 0x19U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	= (0x7ffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
			  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_decode_0_fp_illegal 
	= (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
		 | (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
			       >> 5U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_704 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_736 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_828 
	= (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc) 
				   | (QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
								  >> 2U)))
						       ? 1U
						       : 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1072 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1075 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_imem_sfence_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_sfence));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2827 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_rocc));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_wxd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_csr)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
		      >> 0x36U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	= (VL_ULL(0xffffffffffffff) & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
					<< 1U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_630 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_553 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ))
	    ? (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1))
	    : (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1 
					       >> 0x1fU))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_973 
	= (((QData)((IData)((((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
				 ? 0xffU : 0U) << 0x18U) 
			      | (((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
				   ? 0xffU : 0U) << 0x10U)) 
			     | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
				   ? 0xffU : 0U) << 8U) 
				| ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
				    ? 0xffU : 0U))))) 
	    << 0x20U) | (QData)((IData)((((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					     ? 0xffU
					     : 0U) 
					   << 0x18U) 
					  | (((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U)) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					        ? 0xffU
					        : 0U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_775 
	= (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask)) 
		    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask) 
				>> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs1___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs1
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    __Vtemp348[0U] = 0U;
    __Vtemp348[1U] = 0U;
    __Vtemp348[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp349, __Vtemp348, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp352[0U] = 0U;
    __Vtemp352[1U] = 0U;
    __Vtemp352[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp353, __Vtemp352, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50 
	= ((0xffU & ((0x4000U & (__Vtemp349[2U] << 0xeU)) 
		     | (__Vtemp349[1U] >> 0x12U))) 
	   | (0xff00U & ((0x40000000U & (__Vtemp353[2U] 
					 << 0x1eU)) 
			 | (0x3fffff00U & (__Vtemp353[1U] 
					   >> 2U)))));
    __Vtemp356[0U] = 0U;
    __Vtemp356[1U] = 0U;
    __Vtemp356[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp357, __Vtemp356, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp360[0U] = 0U;
    __Vtemp360[1U] = 0U;
    __Vtemp360[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp361, __Vtemp360, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50 
	= ((0xffU & ((0x4000U & (__Vtemp357[2U] << 0xeU)) 
		     | (__Vtemp357[1U] >> 0x12U))) 
	   | (0xff00U & ((0x40000000U & (__Vtemp361[2U] 
					 << 0x1eU)) 
			 | (0x3fffff00U & (__Vtemp361[1U] 
					   >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1424 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1420) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1426 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1420));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1424 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1420) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1426 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1420));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_201 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_203 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3787));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3791 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3787) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__acquire 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__opcode)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__acquire 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__opcode)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__acquire 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__opcode)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__acquire 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__opcode)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_552 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_355_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_557 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_355_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    __Vtemp364[0U] = 0U;
    __Vtemp364[1U] = 0U;
    __Vtemp364[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp365, __Vtemp364, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp368[0U] = 0U;
    __Vtemp368[1U] = 0U;
    __Vtemp368[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp369, __Vtemp368, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112 
	= ((0xffU & ((0x800U & (__Vtemp365[2U] << 0xbU)) 
		     | (__Vtemp365[1U] >> 0x15U))) 
	   | (0xff00U & ((0x8000000U & (__Vtemp369[2U] 
					<< 0x1bU)) 
			 | (0x7ffff00U & (__Vtemp369[1U] 
					  >> 5U)))));
    __Vtemp372[0U] = 0U;
    __Vtemp372[1U] = 0U;
    __Vtemp372[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp373, __Vtemp372, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp376[0U] = 0U;
    __Vtemp376[1U] = 0U;
    __Vtemp376[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp377, __Vtemp376, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0xffffU & ((__Vtemp373[1U] << 3U) | (__Vtemp373[0U] 
						 >> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp377[0U] << 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs2___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs2
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_858 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_704_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_863 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_704_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf_replay 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Freplay)
		  ? (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
		     - (IData)(1U)) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_359 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_355) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_361 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_355));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_538 
	= (4U | ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462) 
			<< 1U)) | (1U & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462) 
						   << 1U)) 
					 >> (2U | (1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1800 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
	    ? 0xfffff000U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			      ? 0xfffff000U : ((1U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					        ? 0xffe00000U
					        : 0xc0000000U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_104 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fdata 
	   & (~ (IData)((VL_ULL(0x7fffffffffffffff) 
			 & (VL_ULL(0xffffffff) << (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
						      << 4U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and 
	= ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor 
	= ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_partial_insn_valid) 
	   & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_partial_insn))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__load_wb_double)
	     ? VL_ULL(0) : VL_ULL(0xffffffff00000000)) 
	   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__load_wb_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sptbr_mode) 
	     >> 3U) & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1963))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_phys)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__ram_rd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__ram_rd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_rd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_rd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs1___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs1
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_xd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_xd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_id 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_addr 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_len 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__ram_rd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__ram_rd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1601 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscCount));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1605 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscCount) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_way 
	= (0xfU & ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
		    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_way)
		    : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1243))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state 
	= ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1252_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_758 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_758 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_ma_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_ma_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_pf_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_pf_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_ld 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_ae_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_st 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4268) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4270_ae_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_780 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	    | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_806 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext_R0_data 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_ren)
	    ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_addr]
	    : vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext__DOT__R0_random);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1026 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1022) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1028 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1022));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1134 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1130) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1136 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1130));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_958 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_954) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_960 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_954));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1106 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1102) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1108 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1102));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1238 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1234) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1240 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1234));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1346 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1342) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1348 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1342));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1170 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1166) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1172 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1166));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1318 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1314) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1320 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1314));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_938 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_825)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_927 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_764 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_760) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_766 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_760)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_872 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_868) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_874 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_868)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_696 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_692) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_698 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_692)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_938 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_825)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_927 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_872 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_868) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_874 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_868)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_696 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_692) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_698 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_692)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1196 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1192) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1198 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1192)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1304 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1300) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1306 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1300)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1128 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1124) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1130 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1124)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1276 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1272) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1278 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1272)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1014 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1010) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1122 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1118) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_946 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_942) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1094 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1090) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1014 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1010) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1122 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1118) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_946 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_942) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1094 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1090) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_810 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_806) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_812 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_806)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_920 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_916) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_922 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_916)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_741 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_737) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_743 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_737)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_891 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_887) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_893 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_887)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1380 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1257)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1369 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1196 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1192) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1198 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1192)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1128 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1124) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1130 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1124)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1304 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1300) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1306 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1300)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= ((0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[0U] 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_bit0AlignedSigC));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[0U] 
		  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[1U] 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[1U] 
		  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[2U] 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
	= ((0xfffff800U & ((IData)((VL_ULL(0x7fffffffffffff) 
				    & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[3U])
				        ? (VL_ULL(1) 
					   + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)
				        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC))) 
			   << 0xbU)) | ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[2U] 
					       >> 0x1fU)) 
					| (0x7feU & 
					   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[3U] 
					    << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
	= ((0x7ffU & ((IData)((VL_ULL(0x7fffffffffffff) 
			       & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[3U])
				   ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)
				   : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC))) 
		      >> 0x15U)) | (0xfffff800U & ((IData)(
							   ((VL_ULL(0x7fffffffffffff) 
							     & ((0x400U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[3U])
								 ? 
								(VL_ULL(1) 
								 + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)
								 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)) 
							    >> 0x20U)) 
						   << 0xbU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
	= (0x7ffU & ((IData)(((VL_ULL(0x7fffffffffffff) 
			       & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_32[3U])
				   ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)
				   : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC)) 
			      >> 0x20U)) >> 0x15U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1254 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1256 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1362 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1358) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1364 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1186 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1188 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1334 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1330) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1336 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1330));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_816 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_818 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_812)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_748 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_750 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_924 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_926 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_920)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_896 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_898 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_958 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_960 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1106 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1102) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1108 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1102));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1026 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1028 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1022));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1134 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1130) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1136 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1130));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1094 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1090) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1122 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1118) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1254 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1250) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1256 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1362 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1358) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1364 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1186 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1182) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1188 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1182));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1334 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1330) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1336 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1330));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1254 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1250) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1256 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1362 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1358) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1364 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1186 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1182) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1188 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1182));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1334 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1330) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1336 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1330));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1254 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1250) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1256 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1362 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1358) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1364 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1186 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1188 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1334 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1330) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1336 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1330));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1254 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1250) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1256 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1362 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1358) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1364 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1186 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1182) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1188 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1182));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1334 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1330) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1336 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1330));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2458 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2454) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2460 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2454));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2526 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2522) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2528 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2522));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2312 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2308) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2314 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2308));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2599 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2595) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2601 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2595));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2380 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2376) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2382 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2376));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2627 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2623) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2629 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2623));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2728) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2728));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_816 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_818 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_812)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_924 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_926 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_920)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_748 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_750 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_744)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_896 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_898 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_892)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_816 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_818 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_812)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_924 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_926 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_920)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_748 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_750 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_744)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_896 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_898 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_892)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1364 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1360) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1366 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1360));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1472 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1468) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1474 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1468));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1296 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1292) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1298 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1292));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1444 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1440) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1446 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1440));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1008 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1004) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1004));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1114) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1120 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1114));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_939 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_935) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_941 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_935));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1089 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1085) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1091 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1085));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_939 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_935) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_941 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_935));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1089 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1085) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1091 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1085));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1008 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1004) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1010 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1004));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1118 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1114) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1120 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1114));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_ppn 
	    << 9U) | (QData)((IData)((0x1ffU & ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
						 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_req_addr
						 : 
						((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
						  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_req_addr
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_req_addr 
						   >> 9U)
						   : 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_req_addr 
						   >> 0x12U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_idle 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__got_e) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__sent_d));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1238 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1234) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1240 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1234));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1346 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1342) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1348 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1342));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1170 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1166) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1172 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1166));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1318 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1314) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1320 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1314));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1010) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1010));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1122 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1118) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1124 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1118));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_942) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_942));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1094 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1090) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1090));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2458 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2454) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2460 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2454));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2380 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2376) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2382 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2376));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2627 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2623) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2629 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2623));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2728) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2728));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2312 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2308) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2314 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2308));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2599 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2595) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2601 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2595));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2526 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2522) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2528 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2522));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2458 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2460 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2380 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2382 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2376));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2627 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2623) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2629 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2623));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2728) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2728));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2312 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2314 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2308));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2599 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2595) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2601 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2595));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2526 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2528 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2522));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2458 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2460 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2380 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2382 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2376));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2627 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2623) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2629 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2623));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2728) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2728));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2312 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2314 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2308));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2599 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2595) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2601 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2595));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2526 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2528 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2522));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2458 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2460 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2380 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2382 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2376));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2627 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2623) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2629 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2623));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2728) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2728));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2312 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2314 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2308));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2599 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2595) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2601 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2595));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2526 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2528 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2522));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1998 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1994) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2000 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1994));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1852 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1848) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1848));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2139 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2135) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2141 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2135));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1920 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1916) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1922 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1916));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2167 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2163) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2169 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2163));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2272 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2268) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2274 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2268));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2066 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2062) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2068 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2062));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][0U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][1U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][2U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[3U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][3U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[4U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][4U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[5U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][5U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[6U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][6U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[7U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][7U]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_748 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_750 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_744));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_896 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_892) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_898 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_892));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_816 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_818 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_812));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_924 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_920) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_926 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_920));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_ren)
	    ? vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_addr]
	    : vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__R0_random);
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_rd___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_rd
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1500 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1377)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1489 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1316 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1318 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2350 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2346) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2352 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2346));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2418 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2414) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2420 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2414));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2204 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2200) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2206 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2200));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2491 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2487) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2493 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2487));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2272 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2268) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2274 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2268));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2519 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2515) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2521 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2515));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2624 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2620) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2626 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2620));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1500 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1377)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1489 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1316 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1312) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1318 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1312));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_764 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_760) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_766 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_760)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__int_rtc_tick 
	= (0x63U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__value));
    vlTOPp->TestHarness__DOT__dut__DOT___T_226 = (0x7fU 
						  & ((IData)(1U) 
						     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pendingUInt 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_0));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_472 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_479)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_461));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_472 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1257 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)) 
	   & (IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1614 
	= (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1625 
	= (6U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1628 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1648 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1248 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_437 
	= (((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								 (0x3000U 
								  ^ (IData)(
									    (VL_ULL(0xffffffffc0) 
									     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr))))))) 
	    | ((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				  & (QData)((IData)(
						    (0xc000000U 
						     ^ (IData)(
							       (VL_ULL(0xffffffffc0) 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr))))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ (IData)(
								 (VL_ULL(0xffffffffc0) 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (VL_ULL(0xffffffffc0) 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x10000U 
						     ^ (IData)(
							       (VL_ULL(0xffffffffc0) 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				 & (QData)((IData)(
						   (0x80000000U 
						    ^ (IData)(
							      (VL_ULL(0xffffffffc0) 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ (IData)(
							     (VL_ULL(0xffffffffc0) 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1295 
	= (((IData)((VL_ULL(0xffffffffc0) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1269) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1074 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1070) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1070));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_singleIn)
	     ? VL_ULL(0xffffffff00000000) : VL_ULL(0)) 
	   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1006 
	= (1U & (((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 0x21U))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1225 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x28U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1209)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1230 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x26U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1211)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1235 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x24U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1213)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1240 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x23U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1215)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1245 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x22U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1217)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1250 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x21U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1219)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_295 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__resetting)
		      ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__flushCounter))
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__flushCounter)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_478 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_456) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_98 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_wflags) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_ren2)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_44 
	= ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				       >> 0x1dU))))) 
	   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
		 >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54 
	= ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				       >> 0x1dU))))) 
	   & (0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U] 
			       << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[1U] 
					 >> 0x1dU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U] 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm))
		  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
		     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U])
		  : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm))
		      ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U])
		      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
	       >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
	= (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			   << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				     >> 0x1eU)))) & 
	    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
	     >> 0x1dU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
			      >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
	    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U]) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
	      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[0U])))));
    __Vtemp396[0U] = 0U;
    __Vtemp396[1U] = 0U;
    __Vtemp396[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp397, __Vtemp396, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp400[0U] = 0U;
    __Vtemp400[1U] = 0U;
    __Vtemp400[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp401, __Vtemp400, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_55 
	= ((0xffU & ((0x4000U & (__Vtemp397[2U] << 0xeU)) 
		     | (__Vtemp397[1U] >> 0x12U))) 
	   | (0xff00U & ((0x40000000U & (__Vtemp401[2U] 
					 << 0x1eU)) 
			 | (0x3fffff00U & (__Vtemp401[1U] 
					   >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isInfA) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isInfB));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroA) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroB)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroC));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_393 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_387));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_391 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_387) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
	       >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    VL_EXTEND_WQ(76,52, __Vtemp404, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp405, __Vtemp404, 0x18U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
	= (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]))) 
	    << 0x20U) | (QData)((IData)(((0xff800000U 
					  & ((((0U 
						== 
						(7U 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						     << 3U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
						       >> 0x1dU)))) 
					       | (6U 
						  <= 
						  (7U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						       << 3U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							 >> 0x1dU)))))
					       ? ((0x1c0U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						       << 9U) 
						      | (0x1c0U 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							    >> 0x17U)))) 
						  | (0x3fU 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
							 << 0xcU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							   >> 0x14U))))
					       : ((IData)(0x100U) 
						  + 
						  ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						    << 0xcU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
						      >> 0x14U)))) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0x7ff800U 
						& (__Vtemp405[2U] 
						   << 0xbU)) 
					       | (__Vtemp405[1U] 
						  >> 0x15U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2473)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2473)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2473)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2473)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2030 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1090) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2013)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1543 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						      << 6U))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U))))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						   << 6U))))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ 
								     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								      << 6U))))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ 
								    (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								     << 6U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1543 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						      << 6U))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U))))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						   << 6U))))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ 
								     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								      << 6U))))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ 
								    (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								     << 6U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1543 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						      << 6U))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U))))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						   << 6U))))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ 
								     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								      << 6U))))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ 
								    (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								     << 6U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1543 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						      << 6U))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U)))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						    << 6U))))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
						   << 6U))))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ 
								     (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								      << 6U))))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ 
								    (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
								     << 6U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2505 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
	     << 6U) == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2479) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2505 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
	     << 6U) == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2479) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2505 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
	     << 6U) == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2479) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2505 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
	     << 6U) == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2479) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2045 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1088 
	     << 6U) == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2019) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1656 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1634) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1349 
	= (1U & ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_167 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104 
	= (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_106 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_171 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_resp_valid 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_499));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1571 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1565));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1569 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1565) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_83) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_isNaN));
    __Vtemp408[0U] = 0U;
    __Vtemp408[1U] = 0U;
    __Vtemp408[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp409, __Vtemp408, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp412[0U] = 0U;
    __Vtemp412[1U] = 0U;
    __Vtemp412[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp413, __Vtemp412, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112 
	= ((0xffU & ((0x800U & (__Vtemp409[2U] << 0xbU)) 
		     | (__Vtemp409[1U] >> 0x15U))) 
	   | (0xff00U & ((0x8000000U & (__Vtemp413[2U] 
					<< 0x1bU)) 
			 | (0x7ffff00U & (__Vtemp413[1U] 
					  >> 5U)))));
    __Vtemp416[0U] = 0U;
    __Vtemp416[1U] = 0U;
    __Vtemp416[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp417, __Vtemp416, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp420[0U] = 0U;
    __Vtemp420[1U] = 0U;
    __Vtemp420[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp421, __Vtemp420, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0xffffU & ((__Vtemp417[1U] << 3U) | (__Vtemp417[0U] 
						 >> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp421[0U] << 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_283 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_284 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2241 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rvc)
	        ? 2U : 4U) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_signProd) 
	   ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_doSubMags));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2476 
	= (4U | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
			<< 1U)) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
					  << 1U) >> 
					 (2U | (1U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_214 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_214 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1340 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_div) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
					    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						<< 0xcU) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						  >> 0x14U)))) 
		      + VL_EXTENDS_II(14,13, ((0x1000U 
					       & ((0xffffe000U 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						      << 0xdU)) 
						  | (0x1000U 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							>> 0x13U)))) 
					      | ((0x800U 
						  & ((0xfffff000U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
							 << 0xcU)) 
						     | (0x800U 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							   >> 0x14U)))) 
						 | (0x7ffU 
						    & (~ 
						       (0xfffU 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
							    << 0xcU) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							      >> 0x14U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_340 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
	   & (0U != (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			       << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					 >> 0x1dU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_266 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	       >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_260 
	= (((1U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			   << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x1eU)))) & 
	    (2U <= (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			       << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x14U))))) 
	   | (2U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			    << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				      >> 0x1eU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_252 
	= ((1U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1dU)))) | 
	   ((1U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			   << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x1eU)))) & 
	    (2U > (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					  >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__invalidExc 
	= (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			   << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x1eU)))) & 
	    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	     >> 0x1dU)) | ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					  << 2U) | 
					 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					  >> 0x1eU)))) 
			   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				 >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_30 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	       >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_38 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs 
	= (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			   << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x1eU)))) & 
	    (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
		>> 0x1dU))) & ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
					      << 2U) 
					     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
						>> 0x1eU)))) 
			       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				     >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros 
	= ((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1dU)))) & 
	   (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
			  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				    >> 0x1dU)))));
    VL_EXTEND_WQ(76,52, __Vtemp424, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp425, __Vtemp424, 0x18U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
	= (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
	    << 0x20U) | (QData)((IData)(((0xff800000U 
					  & ((((0U 
						== 
						(7U 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						     << 3U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						       >> 0x1dU)))) 
					       | (6U 
						  <= 
						  (7U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						       << 3U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							 >> 0x1dU)))))
					       ? ((0x1c0U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						       << 9U) 
						      | (0x1c0U 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							    >> 0x17U)))) 
						  | (0x3fU 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							 << 0xcU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							   >> 0x14U))))
					       : ((IData)(0x100U) 
						  + 
						  ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						    << 0xcU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						      >> 0x14U)))) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0x7ff800U 
						& (__Vtemp425[2U] 
						   << 0xbU)) 
					       | (__Vtemp425[1U] 
						  >> 0x15U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
	= (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
				   >> 0x1fU)))) << 0x20U) 
	   | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					      << 0xbU)) 
			      | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	       >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__rawIn_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps 
	= ((0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
		       << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				   >> 0x14U))) == (0xfffU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
							 >> 0x14U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne 
	= ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				   << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					      >> 0x1fU)))) 
	   & (0U == (0x7ffU & (~ (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
		     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			 << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x14U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne 
	= ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				   << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					      >> 0x1fU)))) 
	   & (0U == (0x7ffU & (~ (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))))));
    VL_EXTEND_WQ(76,52, __Vtemp428, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp429, __Vtemp428, 0x18U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
	= (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
	    << 0x20U) | (QData)((IData)(((0xff800000U 
					  & ((((0U 
						== 
						(7U 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						     << 3U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						       >> 0x1dU)))) 
					       | (6U 
						  <= 
						  (7U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						       << 3U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							 >> 0x1dU)))))
					       ? ((0x1c0U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						       << 9U) 
						      | (0x1c0U 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							    >> 0x17U)))) 
						  | (0x3fU 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							 << 0xcU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							   >> 0x14U))))
					       : ((IData)(0x100U) 
						  + 
						  ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						    << 0xcU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						      >> 0x14U)))) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0x7ff800U 
						& (__Vtemp429[2U] 
						   << 0xbU)) 
					       | (__Vtemp429[1U] 
						  >> 0x15U)))))));
    VL_EXTEND_WQ(84,53, __Vtemp432, (((QData)((IData)(
						      (1U 
						       & ((0x1ffffeU 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							      << 1U)) 
							  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							     >> 0x1fU))))) 
				      << 0x34U) | (VL_ULL(0xfffffffffffff) 
						   & (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(84,84,5, __Vtemp433, __Vtemp432, 
		  (0x1fU & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						 << 1U)) 
				   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				      >> 0x1fU))) ? 
			    (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					<< 0xcU) | 
				       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					>> 0x14U)))
			     : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[0U] 
	= __Vtemp433[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[1U] 
	= __Vtemp433[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[2U] 
	= (0xfffffU & __Vtemp433[2U]);
    VL_EXTEND_WQ(116,53, __Vtemp436, (((QData)((IData)(
						       (1U 
							& ((0x1ffffeU 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							       << 1U)) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							      >> 0x1fU))))) 
				       << 0x34U) | 
				      (VL_ULL(0xfffffffffffff) 
				       & (((QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(116,116,6, __Vtemp437, __Vtemp436, 
		  (0x3fU & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						 << 1U)) 
				   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				      >> 0x1fU))) ? 
			    (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					<< 0xcU) | 
				       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					>> 0x14U)))
			     : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[0U] 
	= __Vtemp437[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[1U] 
	= __Vtemp437[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
	= __Vtemp437[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
	= (0xfffffU & __Vtemp437[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_param) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe_state_state));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask 
	= (((QData)((IData)((((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
				 ? 0xffU : 0U) << 0x18U) 
			      | (((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
				   ? 0xffU : 0U) << 0x10U)) 
			     | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
				   ? 0xffU : 0U) << 8U) 
				| ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
				    ? 0xffU : 0U))))) 
	    << 0x20U) | (QData)((IData)((((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					     ? 0xffU
					     : 0U) 
					   << 0x18U) 
					  | (((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U)) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					        ? 0xffU
					        : 0U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_54 
	= (1U & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
		  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
			     >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
						   >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__updatePageHit 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageValid) 
	   & ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_5 
		 == (0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
					   >> 0xeU)))) 
		<< 5U) | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_4 
			    == (0x1ffffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
						      >> 0xeU)))) 
			   << 4U) | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_3 
				      == (0x1ffffffU 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
						     >> 0xeU)))) 
				     << 3U))) | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_2 
						   == 
						   (0x1ffffffU 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
							       >> 0xeU)))) 
						  << 2U) 
						 | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_1 
						      == 
						      (0x1ffffffU 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
								  >> 0xeU)))) 
						     << 1U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_0 
						       == 
						       (0x1ffffffU 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
								   >> 0xeU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2654 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_591 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_599)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_580));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_595 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_580)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_id 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2476 
	= (4U | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
			<< 1U)) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
					  << 1U) >> 
					 (2U | (1U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_2015 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5190 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_singleStep 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_48 
	= (1U & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
		  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
			     >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
						   >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_57 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data) 
	   < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_60 
	= ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
		    >> 0x20U)) < (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
					  >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1791 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1871 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2465 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2439) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2573 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2547) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_584 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1248 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_437 
	= (((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								 (0x3000U 
								  ^ 
								  (0xffffffc0U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
	    | ((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				  & (QData)((IData)(
						    (0xc000000U 
						     ^ 
						     (0xffffffc0U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ 
						       (0xffffffc0U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr))))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0xffffffc0U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x10000U 
						     ^ 
						     (0xffffffc0U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr))))))) 
		| (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				 & (QData)((IData)(
						   (0x80000000U 
						    ^ 
						    (0xffffffc0U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr))))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ 
						   (0xffffffc0U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1295 
	= (((0xffffffc0U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1269) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_228 
	= ((0xc0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
		     << 6U)) | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
					 >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_225 
	= ((0x8000U & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_216) 
			  << 0xfU) ^ (0xffff8000U & 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_216) 
				       << 0xdU))) ^ 
			(0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_216) 
					<< 0xcU))) 
		       ^ (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_216) 
					 << 0xaU)))) 
	   | (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_216) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2293 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
	   & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)) 
		 | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_phys))
	    ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1963));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___T_226 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_1 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)) 
	   & (1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__lastGrant)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_2 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
	   & (2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__lastGrant)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2539 
	= (((QData)((IData)((((((0x10000U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
						      >> 0xcU)) 
					     << 0x10U)) 
				| ((0x8000U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
							>> 0xcU)) 
					       << 0xfU)) 
				   | (0x4000U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
							  >> 0xcU)) 
						 << 0xeU)))) 
			       | ((0x2000U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
						       >> 0xcU)) 
					      << 0xdU)) 
				  | (0x1000U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
							 >> 0xcU)) 
						<< 0xcU)))) 
			      | (((0x800U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
						      >> 0xcU)) 
					     << 0xbU)) 
				  | (0x400U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
							>> 0xcU)) 
					       << 0xaU))) 
				 | ((0x200U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
							>> 0xcU)) 
					       << 9U)) 
				    | (0x100U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
							  >> 0xcU)) 
						 << 8U))))) 
			     | ((((0x80U & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
						     >> 0xcU)) 
					    << 7U)) 
				  | (0x40U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
						       >> 0xcU)) 
					      << 6U))) 
				 | ((0x20U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
						       >> 0xcU)) 
					      << 5U)) 
				    | (0x10U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
							 >> 0xcU)) 
						<< 4U)))) 
				| (((8U & ((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
						    >> 0xcU)) 
					   << 3U)) 
				    | (4U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
						      >> 0xcU)) 
					     << 2U))) 
				   | ((2U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
						      >> 0xcU)) 
					     << 1U)) 
				      | (1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
						       >> 0xcU))))))))) 
	    << 0x10U) | (QData)((IData)((((((0x8000U 
					     & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
							 >> 0xcU)) 
						<< 0xfU)) 
					    | (0x4000U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
							   >> 0xcU)) 
						  << 0xeU))) 
					   | ((0x2000U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
							   >> 0xcU)) 
						  << 0xdU)) 
					      | (0x1000U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
							     >> 0xcU)) 
						    << 0xcU)))) 
					  | (((0x800U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
							   >> 0xcU)) 
						  << 0xbU)) 
					      | (0x400U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
							     >> 0xcU)) 
						    << 0xaU))) 
					     | ((0x200U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
							     >> 0xcU)) 
						    << 9U)) 
						| (0x100U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
							       >> 0xcU)) 
						      << 8U))))) 
					 | ((((0x80U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
							   >> 0xcU)) 
						  << 7U)) 
					      | (0x40U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
							     >> 0xcU)) 
						    << 6U))) 
					     | ((0x20U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
							     >> 0xcU)) 
						    << 5U)) 
						| (0x10U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
							       >> 0xcU)) 
						      << 4U)))) 
					    | (((8U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
							     >> 0xcU)) 
						    << 3U)) 
						| (4U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
							       >> 0xcU)) 
						      << 2U))) 
					       | ((2U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
							       >> 0xcU)) 
						      << 1U)) 
						  | (1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
								>> 0xcU))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2312 
	= (1U & ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			     >> 2U))) & (~ (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						    >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2315 
	= (1U & ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			     >> 2U))) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						 >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2318 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			  >> 2U)) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						>> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2321 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			  >> 2U)) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
					     >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2304 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
			   >> 2U) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						>> 2U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2307 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
			   >> 2U) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
					     >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4324 
	= ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			  >> 2U))) ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
					      >> 0x20U))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscAddrMatch 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscAddr 
	   == (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
				      >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_299 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__zero_found 
	= ((((((((0U == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data))) 
		 | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					    >> 8U))))) 
		| (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					   >> 0x10U))))) 
	       | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					  >> 0x18U))))) 
	      | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					 >> 0x20U))))) 
	     | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
					>> 0x28U))))) 
	    | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
				       >> 0x30U))))) 
	   | (0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
				      >> 0x38U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4065 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__c_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4233 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4230) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_div));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
	= (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
				     >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
	= (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
				     >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_78 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
		 ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_80 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (0x1ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
					       >> 0x17U)))) 
		     + VL_EXTENDS_II(11,10, (0x1ffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
						 << 9U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
						   >> 0x17U))))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_310 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3193 
	= (VL_ULL(0x1ffffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_pc 
				    + (QData)((IData)(
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
						        ? 0U
						        : 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_128 
	= ((0xfU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
				   (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CDom_CAlignDist) 
					       >> 2U)))) 
		    >> 5U)) | (0xf0U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						       (0xfU 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CDom_CAlignDist) 
							    >> 2U)))) 
					<< 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfA) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfB));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroA) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroB)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroC));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_signProd) 
	   ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96078 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96086 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166 
	= ((0U == (3U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x25U)) & (~ (0x1fU 
						   & ((IData)(3U) 
						      << 
						      (3U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								  >> 0x2fU))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_381 
	= (((2U >= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x2fU)))) & ((
						   (((((0U 
							== 
							(0x1c0U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x25U)))) 
						       | (0U 
							  == 
							  (0x1fcU 
							   & (0x44U 
							      ^ (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									 >> 0x25U)))))) 
						      | (0U 
							 == 
							 (0x1f8U 
							  & (0x48U 
							     ^ (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									>> 0x25U)))))) 
						     | (0U 
							== 
							(0x1f0U 
							 & (0x50U 
							    ^ (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x25U)))))) 
						    | (0U 
						       == 
						       (0x1e0U 
							& (0x60U 
							   ^ (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								      >> 0x25U)))))) 
						   | (0U 
						      == 
						      (0x180U 
						       & (0x80U 
							  ^ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 0x25U)))))) 
						  | (0U 
						     == 
						     (0x100U 
						      & (0x100U 
							 ^ (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x25U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1155 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x34U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1141)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1160 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x31U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1143)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1165 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2fU))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1145)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1170 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2eU))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1175 
	= (((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			       >> 0x25U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1149)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1225 
	= (((4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x34U)))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1209)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1330 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1257) 
		     >> (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2eU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3107 
	= ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2eU)) << 2U)) | (3U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x2fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2fU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2fU)))) 
			   >> 1U) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						>> 0x26U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2fU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2fU)))) 
			   >> 1U) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x26U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
	= ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x24U))) ? 0xffU : 0U) 
	    << 0x18U) | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					  >> 0x23U)))
			    ? 0xffU : 0U) << 0x10U) 
			 | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x22U)))
			       ? 0xffU : 0U) << 8U) 
			    | ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					      >> 0x21U)))
			        ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173 
	= ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 0x2cU)) << 4U)) | 
	   (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x27U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
	= (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
				     >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4183 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4181 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4179 
	= (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4174 
	= (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__releaseInFlight 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_probe) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe)) 
	   | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3105 
	= ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3119 
	= (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	      | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	     | (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_321 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2307 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_v) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_r) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_x) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2307 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_v) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_r) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_x) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_585 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3843 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)) 
		  | ((0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					    >> 0xcU))) 
		     == (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					       >> 0xcU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3064 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   & (QData)((IData)((0xfU & (((IData)(1U) 
				       << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))) 
				      - (IData)(1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_715 
	= ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr) 
		   | (1U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))) 
		  << 1U)) | (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5215 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5240 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5265 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5290 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5315 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5340 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5365 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5390 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel 
	= (1U & (((IData)(1U) << (1U & (~ (2U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
						 << 1U))))) 
		 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_2][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_2][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_2][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_replay)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2130 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
	    << 2U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe)) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fromint)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__inflight))
	    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__inflight))
	        ? 0U : 2U) : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1088 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1094 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2230 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_pc
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
	= ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
	    >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_78 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
		 ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_80 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
					    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
						<< 0xcU) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
						  >> 0x14U)))) 
		      + VL_EXTENDS_II(14,13, (0xfffU 
					      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
						  << 0xcU) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
						    >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
					   << 3U) | 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allhalted 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allrunning 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_1 
	    << 2U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_sfence 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
	   & (0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1162 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen) 
		 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1288 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1793 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1796 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1802 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1803 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2697 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2466 
	= ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
		      >> 0x14U)) | (0x7ffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
								     >> 0x1fU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0)
	       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_0
	       : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1)
			 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_1
			 : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2)
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_2
				    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3)
					       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_3
					       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2727 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2087 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3173 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jal) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_mask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4) 
	     << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3) 
			<< 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2) 
				  << 2U))) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1) 
					       << 1U) 
					      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146 
	= ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
	      >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2086 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1118 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fma) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1124 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fma) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2718 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jalr) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1138 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_partial_insn_valid)) 
		  | (7U & ((IData)(3U) << (1U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc 
							 >> 1U)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fromint));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fastpipe));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_toint) 
		| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_div)) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_sqrt)) 
	      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fastpipe) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_wflags))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_652 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_fma));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_783 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren3)) 
		 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		    >> 0x1bU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm 
	= (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
			       >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)
		  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		     >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1348 
	= (1U & ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_2)
	    ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_35 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)) 
		 & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
		      << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
				 << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u))) 
		    >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sptbr_mode) 
	    >> 3U) & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_pf_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_2) 
	   & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
		 | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	    << 7U) | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388) 
			       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3843 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem_type)) 
		  | ((0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
					    >> 0xcU))) 
		     == (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					       >> 0xcU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__samePage 
	= ((0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_pc 
				  >> 0xeU))) == (0x1ffffffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0xeU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1386___05FT_1487_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1386
	[(0x1ffU & (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
			      >> 2U)) ^ (3U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 0xbU)))) 
		    ^ (0x1c0U & (((IData)(0xddU) * (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388)) 
				 << 1U))))];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageValid) 
	   & ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_5 
		 == (0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0xeU)))) 
		<< 5U) | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_4 
			    == (0x1ffffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xeU)))) 
			   << 4U) | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_3 
				      == (0x1ffffffU 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						     >> 0xeU)))) 
				     << 3U))) | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_2 
						   == 
						   (0x1ffffffU 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							       >> 0xeU)))) 
						  << 2U) 
						 | (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_1 
						      == 
						      (0x1ffffffU 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
								  >> 0xeU)))) 
						     << 1U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_0 
						       == 
						       (0x1ffffffU 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
								   >> 0xeU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
	= (((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_27) 
		  == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 1U)))) 
		 << 0x1bU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_26) 
			       == (0x1fffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 1U)))) 
			      << 0x1aU)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_25) 
					      == (0x1fffU 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 1U)))) 
					     << 0x19U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_24) 
						== 
						(0x1fffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 1U)))) 
					       << 0x18U))) 
	      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_23) 
		   == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					  >> 1U)))) 
		  << 0x17U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_22) 
				 == (0x1fffU & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							>> 1U)))) 
				<< 0x16U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_21) 
					      == (0x1fffU 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 1U)))) 
					     << 0x15U)))) 
	     | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_20) 
		    == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 1U)))) 
		   << 0x14U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_19) 
				 == (0x1fffU & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							>> 1U)))) 
				<< 0x13U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_18) 
						== 
						(0x1fffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 1U)))) 
					       << 0x12U) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_17) 
						  == 
						  (0x1fffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							      >> 1U)))) 
						 << 0x11U))) 
		| ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_16) 
		     == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					    >> 1U)))) 
		    << 0x10U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_15) 
				   == (0x1fffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 1U)))) 
				  << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_14) 
					       == (0x1fffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							      >> 1U)))) 
					      << 0xeU))))) 
	    | (((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_13) 
		    == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 1U)))) 
		   << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_12) 
				== (0x1fffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 1U)))) 
			       << 0xcU)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_11) 
					      == (0x1fffU 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 1U)))) 
					     << 0xbU) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_10) 
						== 
						(0x1fffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 1U)))) 
					       << 0xaU))) 
		| ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_9) 
		     == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					    >> 1U)))) 
		    << 9U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_8) 
				== (0x1fffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 1U)))) 
			       << 8U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_7) 
					  == (0x1fffU 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							 >> 1U)))) 
					 << 7U)))) 
	       | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_6) 
		      == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 1U)))) 
		     << 6U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_5) 
				== (0x1fffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 1U)))) 
			       << 5U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_4) 
					    == (0x1fffU 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 1U)))) 
					   << 4U) | 
					  (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_3) 
					    == (0x1fffU 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 1U)))) 
					   << 3U))) 
		  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_2) 
		       == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					      >> 1U)))) 
		      << 2U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_1) 
				  == (0x1fffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							 >> 1U)))) 
				 << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxs_0) 
					   == (0x1fffU 
					       & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 1U))))))))) 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__isValid);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2539 
	= (((QData)((IData)((((((0x10000U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
						      >> 0xcU)) 
					     << 0x10U)) 
				| ((0x8000U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
							>> 0xcU)) 
					       << 0xfU)) 
				   | (0x4000U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
							  >> 0xcU)) 
						 << 0xeU)))) 
			       | ((0x2000U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
						       >> 0xcU)) 
					      << 0xdU)) 
				  | (0x1000U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
							 >> 0xcU)) 
						<< 0xcU)))) 
			      | (((0x800U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
						      >> 0xcU)) 
					     << 0xbU)) 
				  | (0x400U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
							>> 0xcU)) 
					       << 0xaU))) 
				 | ((0x200U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
							>> 0xcU)) 
					       << 9U)) 
				    | (0x100U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
							  >> 0xcU)) 
						 << 8U))))) 
			     | ((((0x80U & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
						     >> 0xcU)) 
					    << 7U)) 
				  | (0x40U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
						       >> 0xcU)) 
					      << 6U))) 
				 | ((0x20U & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
						       >> 0xcU)) 
					      << 5U)) 
				    | (0x10U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
							 >> 0xcU)) 
						<< 4U)))) 
				| (((8U & ((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
						    >> 0xcU)) 
					   << 3U)) 
				    | (4U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
						      >> 0xcU)) 
					     << 2U))) 
				   | ((2U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
						      >> 0xcU)) 
					     << 1U)) 
				      | (1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
						       >> 0xcU))))))))) 
	    << 0x10U) | (QData)((IData)((((((0x8000U 
					     & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
							 >> 0xcU)) 
						<< 0xfU)) 
					    | (0x4000U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
							   >> 0xcU)) 
						  << 0xeU))) 
					   | ((0x2000U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
							   >> 0xcU)) 
						  << 0xdU)) 
					      | (0x1000U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
							     >> 0xcU)) 
						    << 0xcU)))) 
					  | (((0x800U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
							   >> 0xcU)) 
						  << 0xbU)) 
					      | (0x400U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
							     >> 0xcU)) 
						    << 0xaU))) 
					     | ((0x200U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
							     >> 0xcU)) 
						    << 9U)) 
						| (0x100U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
							       >> 0xcU)) 
						      << 8U))))) 
					 | ((((0x80U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
							   >> 0xcU)) 
						  << 7U)) 
					      | (0x40U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
							     >> 0xcU)) 
						    << 6U))) 
					     | ((0x20U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
							     >> 0xcU)) 
						    << 5U)) 
						| (0x10U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
							       >> 0xcU)) 
						      << 4U)))) 
					    | (((8U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
							     >> 0xcU)) 
						    << 3U)) 
						| (4U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
							       >> 0xcU)) 
						      << 2U))) 
					       | ((2U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
							       >> 0xcU)) 
						      << 1U)) 
						  | (1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
								>> 0xcU))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_replay)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2600 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2384 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__cmdHi 
	= ((1U == (5U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	   | (2U == (2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_55 
	= ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile
	[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_q 
	= (((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q) 
		<< 0x1fU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q) 
			     << 0x1eU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q) 
					    << 0x1dU) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q) 
					      << 0x1cU))) 
	     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q) 
		  << 0x1bU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q) 
			       << 0x1aU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q) 
					      << 0x19U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q) 
						<< 0x18U)))) 
	    | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q) 
		  << 0x17U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q) 
			       << 0x16U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q) 
					      << 0x15U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q) 
						<< 0x14U))) 
	       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q) 
		    << 0x13U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q) 
				 << 0x12U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q) 
						<< 0x11U) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q) 
						  << 0x10U))))) 
	   | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q) 
		  << 0xfU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q) 
			      << 0xeU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q) 
					    << 0xdU) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q) 
					      << 0xcU))) 
	       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q) 
		    << 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q) 
				<< 0xaU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q) 
					      << 9U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q) 
						<< 8U)))) 
	      | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q) 
		    << 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q) 
			      << 6U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q) 
					  << 5U) | 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q) 
					  << 4U))) 
		 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q) 
		      << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q) 
				<< 2U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q) 
					    << 1U) 
					   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q))))));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_d 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
	     >= vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__timecmp_0) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__ipi_0));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_q 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_9 
	= ((((0xffffffc0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294) 
			     << 6U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290)) 
	    < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_401 
	= ((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_mask))
	      ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_mask))
					    ? 0xffU
					    : 0U) << 0x10U) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_mask))
					        ? 0xffU
					        : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_723 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_709)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_723 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_709)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_793 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_777)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1155 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1141)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_381 
	= ((((((((0U == (0x3c0U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))) 
		 | (0U == (0x3fcU & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
		| (0U == (0x3f8U & (0x48U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	       | (0U == (0x3f0U & (0x50U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	      | (0U == (0x3e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	     | (0U == (0x380U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	    | (0U == (0x300U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_717)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_743 
	= (((0x7fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_717)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1175 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1149)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (0U == (0x1fcU & (0x40U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0 
	= (((((((0U == (0x1c0U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))) 
		| (0U == (0x1fcU & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	       | (0U == (0x1f8U & (0x48U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	      | (0U == (0x1f0U & (0x50U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	     | (0U == (0x1e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	    | (0U == (0x180U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
	   | (0U == (0x100U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (0U == (0x1fcU & (0x40U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
    VL_EXTEND_WQ(65,64, __Vtemp443, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__count);
    VL_EXTEND_WI(65,4, __Vtemp444, (0xfU & ((7U & (
						   (3U 
						    & ((((0xffU 
							  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data)) 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							& ((0x78U 
							    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								- (IData)(1U)) 
							       << 3U)) 
							   >= 
							   (0x3fU 
							    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
						       + 
						       ((((0xffU 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								      >> 8U))) 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							 & ((1U 
							     | (0x78U 
								& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								    - (IData)(1U)) 
								   << 3U))) 
							    >= 
							    (0x3fU 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
							& (1U 
							   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))))) 
						   + 
						   (3U 
						    & (((((0xffU 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								      >> 0x10U))) 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							 & ((2U 
							     | (0x78U 
								& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								    - (IData)(1U)) 
								   << 3U))) 
							    >= 
							    (0x3fU 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
							& (2U 
							   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))) 
						       + 
						       ((((0xffU 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								      >> 0x18U))) 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							 & ((3U 
							     | (0x78U 
								& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								    - (IData)(1U)) 
								   << 3U))) 
							    >= 
							    (0x3fU 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
							& (3U 
							   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))))))) 
					    + (7U & 
					       ((3U 
						 & (((((0xffU 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								   >> 0x20U))) 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
						      & ((4U 
							  | (0x78U 
							     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								 - (IData)(1U)) 
								<< 3U))) 
							 >= 
							 (0x3fU 
							  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
						     & (4U 
							<= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))) 
						    + 
						    ((((0xffU 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								   >> 0x28U))) 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
						      & ((5U 
							  | (0x78U 
							     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								 - (IData)(1U)) 
								<< 3U))) 
							 >= 
							 (0x3fU 
							  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
						     & (5U 
							<= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))))) 
						+ (3U 
						   & (((((0xffU 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								     >> 0x30U))) 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							& ((6U 
							    | (0x78U 
							       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								   - (IData)(1U)) 
								  << 3U))) 
							   >= 
							   (0x3fU 
							    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
						       & (6U 
							  <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))) 
						      + 
						      ((((0xffU 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_data 
								     >> 0x38U))) 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)) 
							& ((7U 
							    | (0x78U 
							       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat) 
								   - (IData)(1U)) 
								  << 3U))) 
							   >= 
							   (0x3fU 
							    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr)))) 
						       & (7U 
							  <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__first_zero))))))))));
    VL_ADD_W(3, __Vtemp445, __Vtemp443, __Vtemp444);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[0U] 
	= __Vtemp445[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[1U] 
	= __Vtemp445[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[2U] 
	= (1U & __Vtemp445[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96061 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259 
		     >> 0x11U)) | ((0x1000U <= (0xffffU 
						& vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259)) 
				   & (0x101fU >= (0xffffU 
						  & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259)))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_736 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1070 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1045)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_679 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_0) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_684 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_689 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_2) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_694 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_3) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_699 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_4) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_704 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_709 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_6) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_714 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_7) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_719 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_8) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_724 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_9) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_10) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_734 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_11) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_739 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_12) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_744 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_13) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_749 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_14) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_754 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_15) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___GEN_8 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
	    ? 4U : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
		     ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
			      ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
				       ? 1U : ((2U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
					        ? 1U
					        : 0U)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_addr 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
		      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data)
		      : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_len 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_b_bits_user 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram___05FT_55_data)
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram___05FT_55_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_55_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_55_data))))))))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
		      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data)
		      : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1053 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id___05FT_55_data)
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		     >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
	= (VL_ULL(0x3ffffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_doSubMags)
				       ? (~ (((QData)((IData)(
							      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
					      << 0x27U) 
					     | (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						 << 7U) 
						| ((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						   >> 0x19U))))
				       : (((QData)((IData)(
							   (3U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_highAlignedSigC 
							       >> 0x18U)))) 
					   << 0x2fU) 
					  | (VL_ULL(0x7fffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						 << 0x26U) 
						| (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						    << 6U) 
						   | ((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						      >> 0x1aU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
	= (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
				       ? (~ (((QData)((IData)(
							      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
				       : ((((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
					  + (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_doSubMags)))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1065 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1043)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_last 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_174)) 
	   | (0U == (0x1ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
			        ? 0U : (~ (0xffffffU 
					   & (((IData)(0xfffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
					      >> 3U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_423 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_414) 
	    << 1U) | (0xfffffffU & ((0x1cU > (4U | 
					      (0x18U 
					       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_414) 
						  << 3U)))) 
				    & ((0xfffffffU 
					& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
					   << 1U)) 
				       >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_414)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_lock 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_cache 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_prot 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot___05FT_55_data)
	    : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_qos 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_985 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_971)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_990 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_973)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1000 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_977)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1160 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1087 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_634 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_634)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_995 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_975)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_429 
	= (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_567 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1005 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_979)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		     >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		     >> 2U)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_107 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_110 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1394))
		  : ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))) 
		      | ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
			 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1394)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_543 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_543)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_621 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_621)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_556 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_556)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_569 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_569)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_582 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_582)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_595 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_595)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_608 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_608)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1309)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1309)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1309)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1328 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1311)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1328 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1311)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1328 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1311)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_220 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_220 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_220 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1338 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1315)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1498 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1425) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1338 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1315)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1498 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1425) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1338 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1315)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1498 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1333 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1313)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1333 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1313)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1333 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1313)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_invalidExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_infiniteExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_211 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_230 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1343 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1317) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_211 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_230 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1343 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1317) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_211 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_230 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1343 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1317) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_395 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_395 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_395 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_202 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_202 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_202 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_85 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_88 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_91 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_94 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_85 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_88 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_91 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_94 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_85 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_88 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_91 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_94 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_invalidExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_infiniteExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1272 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1253)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1288 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1269)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1287 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1259)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1303 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1275)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1048 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1292 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1261)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1369 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_corrupt) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1370 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_denied) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_964 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1282 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1257)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1298 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1273)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1348 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_isInf))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_isZero))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1379)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1413 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1385)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1174 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1418 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1387)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1074 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1408 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1383)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2377 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2363)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2485 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2471)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2382 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2365)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2473)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2387 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2367)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2495 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2475)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1471 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1543 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1479 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2397 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2371) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1551 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2505 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2479) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1373 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1376 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1379 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1382 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1417 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1420 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1423 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1426 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1365 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1368 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1409 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1412 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_993 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_993 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_addr 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_20 
	= ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    ? 1U : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		     ? 4U : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			      ? 5U : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				       ? 3U : ((0xeU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					        ? 3U
					        : (
						   (0xdU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						    ? 3U
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						     ? 3U
						     : 
						    ((0xbU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						      ? 3U
						      : 
						     ((0xaU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						       ? 3U
						       : 
						      ((9U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						        ? 3U
						        : 
						       ((8U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
							 ? 3U
							 : 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1547 
	= (((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data)) 
	      | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data))
		  ? 3U : 0U)) | ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data))
				  ? 2U : 0U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1467 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2392 
	= (((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2369)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1539 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2500 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2477)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_1 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)) 
	   & (0x2bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_2 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
	   & (0x5bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_192 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
	   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U]));
    __Vtemp451[0U] = ((0xfffffe00U & ((IData)((VL_ULL(0xffffffffffffff) 
					       & VL_NEGATE_Q((QData)((IData)(
									     (1U 
									      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))))) 
				      << 9U)) | ((0x100U 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 8U)) 
						 | (0xffU 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U])));
    __Vtemp451[1U] = ((0x1ffU & ((IData)((VL_ULL(0xffffffffffffff) 
					  & VL_NEGATE_Q((QData)((IData)(
									(1U 
									 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))))) 
				 >> 0x17U)) | (0xfffffe00U 
					       & ((IData)(
							  ((VL_ULL(0xffffffffffffff) 
							    & VL_NEGATE_Q((QData)((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U]))))) 
							   >> 0x20U)) 
						  << 9U)));
    __Vtemp451[2U] = (0x1ffU & ((IData)(((VL_ULL(0xffffffffffffff) 
					  & VL_NEGATE_Q((QData)((IData)(
									(1U 
									 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U]))))) 
					 >> 0x20U)) 
				>> 0x17U));
    VL_EXTENDS_WW(74,65, __Vtemp452, __Vtemp451);
    __Vtemp453[0U] = __Vtemp452[0U];
    __Vtemp453[1U] = __Vtemp452[1U];
    __Vtemp453[2U] = (0x3ffU & __Vtemp452[2U]);
    VL_EXTENDS_WW(74,65, __Vtemp455, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    __Vtemp456[0U] = __Vtemp455[0U];
    __Vtemp456[1U] = __Vtemp455[1U];
    __Vtemp456[2U] = (0x3ffU & __Vtemp455[2U]);
    VL_MULS_WWW(74,74,74, __Vtemp457, __Vtemp453, __Vtemp456);
    __Vtemp458[0U] = __Vtemp457[0U];
    __Vtemp458[1U] = __Vtemp457[1U];
    __Vtemp458[2U] = (0x3ffU & __Vtemp457[2U]);
    VL_EXTENDS_WW(75,74, __Vtemp459, __Vtemp458);
    __Vtemp461[0U] = __Vtemp459[0U];
    __Vtemp461[1U] = __Vtemp459[1U];
    __Vtemp461[2U] = (0x7ffU & __Vtemp459[2U]);
    __Vtemp466[0U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U];
    __Vtemp466[1U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[3U];
    __Vtemp466[2U] = ((0x3feU & (VL_NEGATE_I((IData)(
						     (1U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[4U]))) 
				 << 1U)) | (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[4U]));
    VL_EXTENDS_WW(75,74, __Vtemp467, __Vtemp466);
    __Vtemp469[0U] = __Vtemp467[0U];
    __Vtemp469[1U] = __Vtemp467[1U];
    __Vtemp469[2U] = (0x7ffU & __Vtemp467[2U]);
    VL_ADD_W(3, __Vtemp470, __Vtemp461, __Vtemp469);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U] 
	= (IData)((VL_ULL(0xffffffffffffff) & (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
						<< 0x38U) 
					       | (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U])) 
						   << 0x18U) 
						  | ((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U])) 
						     >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U] 
	= ((0xff000000U & (__Vtemp470[0U] << 0x18U)) 
	   | (IData)(((VL_ULL(0xffffffffffffff) & (
						   ((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
						    << 0x38U) 
						   | (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U])) 
						       << 0x18U) 
						      | ((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U])) 
							 >> 8U)))) 
		      >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U] 
	= ((0xffffffU & (__Vtemp470[0U] >> 8U)) | (0xff000000U 
						   & (__Vtemp470[1U] 
						      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[3U] 
	= ((0xffffffU & (__Vtemp470[1U] >> 8U)) | (0xff000000U 
						   & (__Vtemp470[2U] 
						      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[4U] 
	= (3U & (__Vtemp470[2U] >> 8U));
    __Vtemp474[0U] = 0U;
    __Vtemp474[1U] = 0U;
    __Vtemp474[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp475, __Vtemp474, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count) 
			     << 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148 
	= ((((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi))) 
	   & (VL_ULL(0) == ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U])) 
			      << 0x20U) | (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U]))) 
			    & (~ (((QData)((IData)(
						   __Vtemp475[1U])) 
				   << 0x20U) | (QData)((IData)(
							       __Vtemp475[0U])))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_602 
	= (0x7fU & ((0x3fU & ((IData)(0x3fU) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_395))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_598)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_605 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_395) 
	   > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_598));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__loOut 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__req_dw)) 
	    & (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))))
	    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result 
		       >> 0x20U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1072) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1072) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1075) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1075) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1243 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)) 
	   | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)) 
	   & ((0x10000000U == (0x12400000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)) 
	      | (0x40000000U == (0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)) 
	   & (0U == (0x10100000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)) 
	   & (0x100000U == (0x10100000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1250 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_1445 
	= ((0x10U & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
		     >> 0xeU)) | ((0xcU & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
					   >> 7U)) 
				  | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
					    >> 3U)) 
				     | (1U & vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45) 
	   & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
		      >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1
	    : (((QData)((IData)((0x7fffffffU & VL_NEGATE_I((IData)(
								   (1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_553 
									       >> 0x20U)))))))) 
		<< 0x21U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_553));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_807 
	= (((((0x80U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				 >> 0x3fU)) << 7U)) 
	      | (0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				   >> 0x37U)) << 6U))) 
	     | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				   >> 0x2fU)) << 5U)) 
		| (0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				     >> 0x27U)) << 4U)))) 
	    | (((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				>> 0x1fU)) << 3U)) 
		| (4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				  >> 0x17U)) << 2U))) 
	       | ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				  >> 0xfU)) << 1U)) 
		  | (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
				   >> 7U)))))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_775)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_810 
	= (((((0x80U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				 >> 0x3fU)) << 7U)) 
	      | (0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				   >> 0x37U)) << 6U))) 
	     | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				   >> 0x2fU)) << 5U)) 
		| (0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				     >> 0x27U)) << 4U)))) 
	    | (((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				>> 0x1fU)) << 3U)) 
		| (4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				  >> 0x17U)) << 2U))) 
	       | ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				  >> 0xfU)) << 1U)) 
		  | (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
				   >> 7U)))))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_775)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_50) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1277 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1255)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1293 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1271)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1218 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1201)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_270 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1228 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1205)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1388 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1315 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1233 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1207) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_186 
	= (((0U == (0x1c000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
	    | (0U == (0x1fff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (0U == (0x1ffff000U & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_376 
	= (((0U == (0xa010000U & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))
	     ? 2U : 0U) | (0U == (0xa010000U & (0x2000000U 
						^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_resp 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_resp___05FT_63_data)
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp___05FT_63_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp___05FT_63_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_user 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_user___05FT_63_data)
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user___05FT_63_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user___05FT_63_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_user 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_55_data)
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_55_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_55_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_55_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_76 
	= ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
	   & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
	      & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		 & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		    & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			  & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			     & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
				& ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
				   & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
				       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_last___05FT_63_data)
				       : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
					   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last___05FT_63_data)
					   : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
					       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last___05FT_63_data)
					       : ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last___05FT_63_data)
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last___05FT_63_data)
						    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last___05FT_63_data)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__acquire)
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__opcode));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__acquire)
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__opcode));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__acquire)
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__opcode));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__acquire)
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__opcode));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		    << 0x3eU) | (((QData)((IData)((0xfffffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
						      >> 0xcU)))) 
				  << 0x2aU) | (((QData)((IData)(
								(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data) 
								  << 0x14U) 
								 | (0xfffffU 
								    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
								       >> 0xcU))))) 
						<< 0x15U) 
					       | (QData)((IData)(
								 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data) 
								   << 0x14U) 
								  | (0xfffffU 
								     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
									>> 0xcU)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[1U] 
	= ((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
			   << 0x13U)) | (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
						   << 0x3eU) 
						  | (((QData)((IData)(
								      (0xfffffU 
								       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
									  >> 0xcU)))) 
						      << 0x2aU) 
						     | (((QData)((IData)(
									 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data) 
									   << 0x14U) 
									  | (0xfffffU 
									     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
										>> 0xcU))))) 
							 << 0x15U) 
							| (QData)((IData)(
									  (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data) 
									    << 0x14U) 
									   | (0xfffffU 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
										>> 0xcU)))))))) 
						 >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[2U] 
	= (0x7fffffffU & ((0x7ff80000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data) 
					  << 0x13U)) 
			  | (0x7ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
					 >> 0xdU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2306 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2287)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1350 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1350 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2414 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2395)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2321 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2293)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2655 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2607) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1365 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1337)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1365 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1337)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2429 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2401)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2763 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2715) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1176 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2326 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2295)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1126 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1370 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1339)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1126 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1370 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1339)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1220 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2434 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2403)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1076 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2316 
	= (((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2291)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2424 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2399)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
	= ((0xff00ffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
						   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_573 
	= ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))))
	    ? ((6U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_538) 
		      << 1U)) | (1U & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462) 
						 << 1U)) 
				       >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_538))))
	    : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
	        ? ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
		    ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
		        ? ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
			    ? ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
			        ? ((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
				    ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465))
				        ? 7U : 6U) : 5U)
			        : 4U) : 3U) : 2U) : 1U)
	        : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1060 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1041)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1075 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1047)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1065 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1043)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_836 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1049)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_3 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1055 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1039)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1288 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1269)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1288 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1269)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1288 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1269)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1288 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1269)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1303 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1275)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1303 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1275)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1303 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1275)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1303 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1275)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1293 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1271)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1293 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1271)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1293 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1271)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1293 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1271)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1064 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1308 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1277)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1064 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1308 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1277)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1064 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1308 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1277)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1064 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1308 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1277)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0 
	= (7U & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		  ? (~ (0x3ffffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				    >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1283 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1267)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1283 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1267)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1283 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1267)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1283 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1267)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1048 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1029)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1063 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1035)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_824 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1037)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_2 
	= (0x1fU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		     ? (~ (0xfffffU & (((IData)(0xffU) 
					<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				       >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_736 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1070 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1045)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3542[0U] 
	= ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3542[1U] 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3542[2U] 
	= ((0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
			   << 0xfU)) | ((0xffffe000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
					    << 0xdU)) 
					| ((0xfffffe00U 
					    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
					       << 9U)) 
					   | ((0xfffffff0U 
					       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						  << 4U)) 
					      | ((0xfffffffcU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
						     << 2U)) 
						 | ((0xfffffffeU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
							<< 1U)) 
						    | (1U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
								   >> 0x20U)) 
							  >> 0x1fU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_964 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_964 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_964 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_964 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1298 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1273)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1298 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1273)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1298 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1273)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1298 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1273)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3515[0U] 
	= ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3515[1U] 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3515[2U] 
	= ((0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
			   << 0xfU)) | ((0xffffe000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
					    << 0xdU)) 
					| ((0xfffffe00U 
					    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
					       << 9U)) 
					   | ((0xfffffff0U 
					       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						  << 4U)) 
					      | ((0xfffffffcU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
						     << 2U)) 
						 | ((0xfffffffeU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
							<< 1U)) 
						    | (1U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
								   >> 0x20U)) 
							  >> 0x1fU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3533[0U] 
	= ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3533[1U] 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3533[2U] 
	= ((0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
			   << 0xfU)) | ((0xffffe000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
					    << 0xdU)) 
					| ((0xfffffe00U 
					    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
					       << 9U)) 
					   | ((0xfffffff0U 
					       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						  << 4U)) 
					      | ((0xfffffffcU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
						     << 2U)) 
						 | ((0xfffffffeU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
							<< 1U)) 
						    | (1U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
								   >> 0x20U)) 
							  >> 0x1fU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1328 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1311)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1328 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1311)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1309)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1309)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_220 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_220 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1338 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1315)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1498 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1425) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1338 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1315)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1498 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1425) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_0 
	= (0x1ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		      ? 0U : (~ (0xffffffU & (((IData)(0xfffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					      >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1333 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1313)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1333 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1313)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_211 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_230 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1343 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1317) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_211 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_230 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1343 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1317) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_395 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_395 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_202 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_202 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_85 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_88 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_91 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_94 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_85 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_88 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_91 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_94 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[0U] 
	= ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[1U] 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[2U] 
	= ((0xfffffffeU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				     << 8U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			   << 1U)) | (1U & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
						     >> 0x20U)) 
					    >> 0x1fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[3U] 
	= ((0xfffffe00U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			     << 0x15U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
					  << 0x12U)) 
			   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
			       << 0xeU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
					   << 9U)))) 
	   | ((1U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
			       << 8U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		     >> 0x1fU)) | (0xfffffffeU & ((IData)(
							  ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
							     << 8U) 
							    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data))) 
							   >> 0x20U)) 
						  << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0 
	= ((((VL_ULL(0) == (VL_ULL(0xc8000000) & (QData)((IData)(
								 (0x8000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0xca010000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0xca010000) & (QData)((IData)(
								 (0x10000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320 
	= (1U & (((IData)(3U) << (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc 
						>> 1U)))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_173 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_173 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_173 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_173 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1202 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1185)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_961)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_971 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_954)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_971 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_954)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1217 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1191) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_993 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_993 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_993 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_993 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_967) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_993 
	= (((0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_967)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_993 
	= (((0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_967)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_986 
	= (((0x1ffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_960) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_986 
	= (((0x1ffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_960) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_186 
	= (((0U == (0x1c000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
	    | (0U == (0x1fff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (0U == (0x1ffff000U & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
}
