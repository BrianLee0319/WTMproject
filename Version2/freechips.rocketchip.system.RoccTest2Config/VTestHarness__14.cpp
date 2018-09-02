// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__33(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__33\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp241,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp252,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp253,95,0,3);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp256,95,0,3);
    //char	__VpadToAlign68[4];
    VL_SIGW(__Vtemp257,95,0,3);
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp259,95,0,3);
    //char	__VpadToAlign100[4];
    VL_SIGW(__Vtemp260,95,0,3);
    //char	__VpadToAlign116[4];
    VL_SIGW(__Vtemp262,95,0,3);
    //char	__VpadToAlign132[4];
    VL_SIGW(__Vtemp263,95,0,3);
    //char	__VpadToAlign148[4];
    VL_SIGW(__Vtemp266,95,0,3);
    //char	__VpadToAlign164[4];
    VL_SIGW(__Vtemp267,95,0,3);
    //char	__VpadToAlign180[4];
    VL_SIGW(__Vtemp270,95,0,3);
    //char	__VpadToAlign196[4];
    VL_SIGW(__Vtemp271,95,0,3);
    //char	__VpadToAlign212[4];
    VL_SIGW(__Vtemp274,95,0,3);
    //char	__VpadToAlign228[4];
    VL_SIGW(__Vtemp275,95,0,3);
    //char	__VpadToAlign244[4];
    VL_SIGW(__Vtemp278,95,0,3);
    //char	__VpadToAlign260[4];
    VL_SIGW(__Vtemp279,95,0,3);
    //char	__VpadToAlign276[4];
    VL_SIGW(__Vtemp281,95,0,3);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp283,95,0,3);
    //char	__VpadToAlign308[4];
    VL_SIGW(__Vtemp284,95,0,3);
    //char	__VpadToAlign324[4];
    VL_SIGW(__Vtemp288,95,0,3);
    //char	__VpadToAlign340[4];
    VL_SIGW(__Vtemp289,95,0,3);
    //char	__VpadToAlign356[4];
    VL_SIGW(__Vtemp292,95,0,3);
    //char	__VpadToAlign372[4];
    VL_SIGW(__Vtemp293,95,0,3);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp296,95,0,3);
    //char	__VpadToAlign404[4];
    VL_SIGW(__Vtemp297,95,0,3);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp300,127,0,4);
    VL_SIGW(__Vtemp301,127,0,4);
    // Body
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290134
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_raw_inst 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_raw_inst;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:284365
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut_reset)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_362)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290354
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3267 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
	    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290336
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3262 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
	    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2130);
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1316 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1312) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1318 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1312));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_typ 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_typ;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:239470
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4049) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__c_first)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4065)));
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_764 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_760) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_766 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_760)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:306255
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_301 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:293711
    vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_1;
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pendingUInt 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_0));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274425
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1218) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_cp = 0U;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274430
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1218) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1189;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290039
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_entry 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_188)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_entry)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry));
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_472 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_479)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_461));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247646
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_btb_entry 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_entry)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247681
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_xcpt_ae_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_xcpt_ae_inst)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247688
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_replay 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_replay)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay));
    }
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1074 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1070) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1070));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:131827
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___T_41) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___T_41;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:131947
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full 
		= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__empty)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41));
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290052
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	VL_EXTEND_WI(65,4, __Vtemp241, ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0))
					 ? 0xeU : (
						   (1U 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
						       << 0xeU))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								>> 0xfU)))
						     ? 0xfU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								 >> 0xeU)))
						      ? 0xeU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								  >> 0xdU)))
						       ? 0xdU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								   >> 0xcU)))
						        ? 0xcU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								    >> 0xbU)))
							 ? 0xbU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								     >> 3U)))
							  ? 3U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								      >> 7U)))
							   ? 7U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
								       >> 9U)))
							    ? 9U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
									>> 1U)))
							     ? 1U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
									 >> 5U)))
							      ? 5U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
									  >> 8U)))
							       ? 8U
							       : 
							      ((1U 
								& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts))
							        ? 0U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
									    >> 4U)))
								 ? 4U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
									     >> 0xfU)))
								  ? 0xfU
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
									      >> 0xeU)))
								   ? 0xeU
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
									       >> 0xdU)))
								    ? 0xdU
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 0xcU)))
								     ? 0xcU
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 0xbU)))
								      ? 0xbU
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 3U)))
								       ? 3U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 7U)))
								        ? 7U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 9U)))
									 ? 9U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 1U)))
									  ? 1U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 5U)))
									   ? 5U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
										>> 8U)))
									    ? 8U
									    : 
									   ((1U 
									     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts))
									     ? 0U
									     : 4U))))))))))))))))))))))))))));
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_cause 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_interrupt)
	        ? (VL_ULL(0x8000000000000000) + (((QData)((IData)(
								  __Vtemp241[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   __Vtemp241[0U]))))
	        : (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu_io_debug_if)
				    ? 0xeU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if)
					       ? 3U
					       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst)
						   ? 0xcU
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst)
						    ? 1U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_172))
						     ? 0xcU
						     : 
						    ((1U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_172))
						      ? 1U
						      : 2U)))))))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289930
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_fence_i 
	    = (0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289914
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_wfd 
	    = ((((4U == (0x3cU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		 | (0x40U == (0x80000068U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x40U == (0x70U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x10000040U == (0x10000068U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289917
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_div 
	    = (0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290046
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_flush_pipe 
	    = ((0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1984) 
		  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_csr_en) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_csr_ren))) 
		     & (~ (((0x340U <= (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						  >> 0x14U))) 
			    & (0x343U >= (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
			   | ((0x140U <= (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U))) 
			      & (0x143U >= (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U)))))))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289963
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_mem_type 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_singleIn)
	     ? VL_ULL(0xffffffff00000000) : VL_ULL(0)) 
	   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_in1);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274172
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn 
	    = (((((((0U == (0x82100020U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		    | (0U == (0x42000020U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		   | (0U == (0x2000030U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  | (0x1000U == (0x2103000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0x10000000U == (0x12002000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x40000010U == (0xd0100010U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x80000000U == (0xa2000020U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274190
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_div 
	    = (0x18000010U == (0x58000010U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274181
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_toint 
	    = ((0x20U == (0x20U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	       | (0x80000010U == (0x90000010U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274420
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1218) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_single 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289845
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jal 
	    = (0x68U == (0x78U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
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
    __Vtemp252[0U] = 0U;
    __Vtemp252[1U] = 0U;
    __Vtemp252[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp253, __Vtemp252, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp256[0U] = 0U;
    __Vtemp256[1U] = 0U;
    __Vtemp256[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp257, __Vtemp256, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_55 
	= ((0xffU & ((0x4000U & (__Vtemp253[2U] << 0xeU)) 
		     | (__Vtemp253[1U] >> 0x12U))) 
	   | (0xff00U & ((0x40000000U & (__Vtemp257[2U] 
					 << 0x1eU)) 
			 | (0x3fffff00U & (__Vtemp257[1U] 
					   >> 2U)))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263701
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm 
	    = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
				   >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)
		      : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
			 >> 0xcU)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270670
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_rm 
	    = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
				   >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)
		      : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
			 >> 0xcU)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263707
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
	VL_EXTEND_WQ(65,33, __Vtemp259, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_697);
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
	    = __Vtemp259[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
	    = __Vtemp259[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[2U] 
	    = __Vtemp259[2U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isInfA) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isInfB));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroA) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroB)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_isZeroC));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263710
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_swap23) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] = 0x80000000U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] = 0U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[2U] = 0U;
	} else {
	    VL_EXTEND_WQ(65,33, __Vtemp260, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_737);
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
		= __Vtemp260[0U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
		= __Vtemp260[1U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[2U] 
		= __Vtemp260[2U];
	}
    }
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
    VL_EXTEND_WQ(76,52, __Vtemp262, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp263, __Vtemp262, 0x18U);
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
						& (__Vtemp263[2U] 
						   << 0xbU)) 
					       | (__Vtemp263[1U] 
						  >> 0x15U)))))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289923
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_csr 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_csr_ren)
	        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_csr));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:51090
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT__empty)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41))
		    : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41));
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:286030
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_627) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__cmdHi;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:106391
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_307) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_253)
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_310)));
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247632
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_btb_taken 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_taken)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247639
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_btb_bridx 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_bridx)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290124
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_pc 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_pc;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270480
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CDom_CAlignDist 
	    = (0x3fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270444
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isNaNAOrB 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_83) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_isNaN));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270447
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfA 
	    = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
			      << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
					>> 0x1eU)))) 
	       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
		     >> 0x1dU)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270450
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroA 
	    = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
				       >> 0x1dU))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270453
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfB 
	    = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
			      << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
					>> 0x1eU)))) 
	       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
		     >> 0x1dU)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270456
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroB 
	    = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
				       >> 0x1dU))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270465
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfC 
	    = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
			      << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					>> 0x1eU)))) 
	       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
		     >> 0x1dU)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270441
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isSigNaNAny 
	    = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
		 & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
			       >> 0x33U)))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
					       & (~ (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
							     >> 0x33U))))) 
	       | (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
				  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					    >> 0x1eU)))) 
		   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
		      >> 0x1dU)) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
					       >> 0x33U)))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270499
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__valid_stage0 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270477
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CIsDominant 
	    = ((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
			      << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					>> 0x1dU)))) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_95));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270471
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_sExpSum 
	    = (0x1fffU & (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
					  << 3U) | 
					 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					  >> 0x1dU)))) 
			   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_95))
			   ? (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
					 << 0xcU) | 
					(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
					 >> 0x14U)))
			   : ((0x7fffU & VL_EXTENDS_II(15,14, 
						       (0x3fffU 
							& ((IData)(0x3838U) 
							   + 
							   (0x7fffU 
							    & VL_EXTENDS_II(15,14, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_80))))))) 
			      - (IData)(0x35U))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270474
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_84) 
		     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_fmaCmd)));
    }
    __Vtemp266[0U] = 0U;
    __Vtemp266[1U] = 0U;
    __Vtemp266[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp267, __Vtemp266, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp270[0U] = 0U;
    __Vtemp270[1U] = 0U;
    __Vtemp270[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp271, __Vtemp270, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112 
	= ((0xffU & ((0x800U & (__Vtemp267[2U] << 0xbU)) 
		     | (__Vtemp267[1U] >> 0x15U))) 
	   | (0xff00U & ((0x8000000U & (__Vtemp271[2U] 
					<< 0x1bU)) 
			 | (0x7ffff00U & (__Vtemp271[1U] 
					  >> 5U)))));
    __Vtemp274[0U] = 0U;
    __Vtemp274[1U] = 0U;
    __Vtemp274[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp275, __Vtemp274, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp278[0U] = 0U;
    __Vtemp278[1U] = 0U;
    __Vtemp278[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp279, __Vtemp278, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0xffffU & ((__Vtemp275[1U] << 3U) | (__Vtemp275[0U] 
						 >> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp279[0U] << 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_283 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_284 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247653
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_btb_bht_history 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_bht_history)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2241 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rvc)
	        ? 2U : 4U) : 0U);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214642
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96072) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 1U;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96078) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
		    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)
		        ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)
				 ? 0U : 2U));
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96086) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn) {
			vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
		    } else {
			if ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn)) 
			     & ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data)) 
				== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)))) {
			    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214795
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_signProd) 
	   ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_doSubMags));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263704
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd 
	    = (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		      >> 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_783)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263700
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:263717
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
	if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren3) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_swap23))) {
	    VL_EXTEND_WQ(65,33, __Vtemp281, ((((QData)((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U] 
								   >> 0x1fU)))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((0x80000000U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
								     << 0xbU)) 
								 | (0x7fffffffU 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U]))))) 
					     | ((0U 
						 == 
						 (0x1fU 
						  & (~ 
						     ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
							 >> 0x1cU)))))
						 ? VL_ULL(0)
						 : VL_ULL(0xe0400000))));
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
		= __Vtemp281[0U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
		= __Vtemp281[1U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[2U] 
		= __Vtemp281[2U];
	} else {
	    VL_EXTEND_WQ(65,33, __Vtemp283, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_697);
	    VL_EXTEND_WQ(65,33, __Vtemp284, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_737);
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] = 0U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
		= (1U & (__Vtemp283[1U] ^ __Vtemp284[1U]));
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[2U] = 0U;
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:183131
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT___GEN_11;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:86089
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_306) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_253)
			  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_307)));
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_214 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_214 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1340 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_div) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274193
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_sqrt 
	    = (0x50000010U == (0xd0000010U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
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
    VL_EXTEND_WQ(76,52, __Vtemp288, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp289, __Vtemp288, 0x18U);
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
						& (__Vtemp289[2U] 
						   << 0xbU)) 
					       | (__Vtemp289[1U] 
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
    VL_EXTEND_WQ(76,52, __Vtemp292, (VL_ULL(0xfffffffffffff) 
				     & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp293, __Vtemp292, 0x18U);
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
						& (__Vtemp293[2U] 
						   << 0xbU)) 
					       | (__Vtemp293[1U] 
						  >> 0x15U)))))));
    VL_EXTEND_WQ(84,53, __Vtemp296, (((QData)((IData)(
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
    VL_SHIFTL_WWI(84,84,5, __Vtemp297, __Vtemp296, 
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
	= __Vtemp297[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[1U] 
	= __Vtemp297[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[2U] 
	= (0xfffffU & __Vtemp297[2U]);
    VL_EXTEND_WQ(116,53, __Vtemp300, (((QData)((IData)(
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
    VL_SHIFTL_WWI(116,116,6, __Vtemp301, __Vtemp300, 
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
	= __Vtemp301[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[1U] 
	= __Vtemp301[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
	= __Vtemp301[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
	= (0xfffffU & __Vtemp301[3U]);
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289938
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_rocc 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290117
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_sfence;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290144
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2) 
		 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
		     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_sfence)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rs2 
		    = ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2697)))
		        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2704)) 
			    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2704)))
		        : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2697)))
			    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2709)) 
				<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2709)))
			    : ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2697)))
			        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1)) 
				    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1)))
			        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
				    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
				        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
				        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
					    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
					    : ((1U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
					        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
					        : VL_ULL(0))))
				    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140))));
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:142410
    if (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT___T_30) {
	vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__size 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[3U] 
		     >> 0xeU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:142762
    if (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT___T_30) {
	vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__size 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[3U] 
		     >> 0xeU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:143114
    if (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT___T_30) {
	vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__size 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[3U] 
		     >> 0xeU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:143466
    if (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT___T_30) {
	vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__size 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[3U] 
		     >> 0xeU));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_param) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe_state_state));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:238741
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_probe 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
		 & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state))
		     ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_162)) 
			| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_269))
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_269))));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:238769
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:99719
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_306) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_253)
			  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
			     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_307)));
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:92922
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_306) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_253)
			  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
			     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_307)));
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276922
    if ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	    if ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_a 
			    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
					     >> 6U)));
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276988
    if ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	    if ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_v 
			    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_413)
				      ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_426)) 
					 & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_419)) 
					    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data)))
				      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data)));
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276977
    if ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	    if ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_r 
			    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
					     >> 1U)));
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276955
    if ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	    if ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_x 
			    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
					     >> 3U)));
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276966
    if ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
	    if ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_w 
			    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
					     >> 2U)));
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247660
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_pc 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_pc
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274363
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1194) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
		= (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
			    >> 7U));
	} else {
	    if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd;
	    }
	}
    } else {
	if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:239160
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3830) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsCached) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_770) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_tag;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag;
		} else {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_770) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag 
			    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_tag;
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_770) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_tag;
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_770) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_tag;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247667
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_data 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_data
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data);
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:277782
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_84) {
	if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_1_data = VL_ULL(0);
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:277752
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_84) {
	if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot) 
		      >> 1U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_0_data = VL_ULL(0);
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:278149
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__s1_req_tag 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__req_arb_io_out_bits_tag;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:278149
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__s1_req_tag 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__req_arb_io_out_bits_tag;
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:251619
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_btb_update_valid));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:251632
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_btb_update_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_br_pc 
	    = (VL_ULL(0x7fffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_imem_btb_update_valid)
				        ? (VL_ULL(0x7fffffffff) 
					   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3193)
				        : ((~ (VL_ULL(3) 
					       | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc))) 
					   | (QData)((IData)(
							     (2U 
							      & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)) 
								 << 1U)))))));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:238736
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_req_ready) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_mem_req_valid)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:278149
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s1_req_tag 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_bits_tag;
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:303384
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_365 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__temp_array_0
	        : 0U);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__value_1));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:241791
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__zero_found) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__finished = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_577) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__finished = 0U;
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_577) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__finished = 0U;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_584 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1248 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1244));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:242378
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_228 
	= ((0xc0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215) 
		     << 6U)) | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
					 >> 6U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:242395
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_fire) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid = 1U;
	    }
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:238772
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ 
	    = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))
	        ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_valid)
			 ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid)
			     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
				 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_1_typ)
				 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_0_typ))
			     : 3U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid)
				       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid)
					   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
					       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_1_typ)
					       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_0_typ))
					   : 0U) : 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid)
				        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid)
					    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_1_typ)
					        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_0_typ))
					    : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type)))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247480
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_141)
	       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_155)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247674
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_147) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_2_xcpt_pf_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_xcpt_pf_inst)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:276875
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_460) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_req_dest 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_chosen;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274810
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_355 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_valid)
		     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid)
			      ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid)
				       ? 3U : 4U))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290201
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:239058
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3830) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsCached) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3771) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached) {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel) {
			    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 1U;
			}
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3847) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 0U;
		    } else {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3771) {
			    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached) {
				if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel) {
				    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 1U;
				}
			    }
			}
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3771) {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached) {
			    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel) {
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 1U;
			    }
			}
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3771) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0 = 1U;
		    }
		}
	    }
	}
    }
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290066
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_raw_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_299 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290239
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_illegal_insn)) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2288));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290249
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0 
	    = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_illegal_insn)
		      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2317
		      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2298)
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_0)
			  : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))
			      ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_bypass_src_0_1)
				       ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_bypass_src_0_2)
					        ? 2U
					        : 3U))))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag;
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state;
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:293712
    vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_1 
	= vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_2;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:279673
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_entry 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247709
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_entry 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_entry)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247744
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_xcpt_ae_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_xcpt_ae_inst)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247751
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_replay 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_replay)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:261333
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_1;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_div));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274199
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:284341
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm 
	= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_367));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247695
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_taken 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_taken)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247702
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_bridx 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bridx)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3193 
	= (VL_ULL(0x1ffffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_pc 
				    + (QData)((IData)(
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
						        ? 0U
						        : 2U)))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290060
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_pc 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_pc;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270676
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[0U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfA) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isInfB));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroA) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroB)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_isZeroC));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270679
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_swap23) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[0U] = 0U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] = 0x80000000U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] = 0U;
	} else {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[0U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U];
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270686
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid) {
	if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren3) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_swap23))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[0U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U];
	} else {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[0U] = 0U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] = 0U;
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
		= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
			 ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U]));
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270669
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__valid 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_signProd) 
	   ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:270673
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_fmaCmd 
	    = (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		      >> 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_783)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247716
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_btb_bht_history 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bht_history)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96078 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96086 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:214613
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 0U;
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 0U;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:213619
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
			     >> 1U));
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289839
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_rocc;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289851
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_rxs2;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290246
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2303;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290272
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1 
	    = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2313)
		      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_1)
		      : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2))
			  ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_bypass_src_1_1)
				   ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_bypass_src_1_2)
					    ? 2U : 3U)))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290207
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
	    = ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd))
	        ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
			   ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)) 
			      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
				 >> 1U)) : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
					    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_singleOut)))))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__toint
		    : (((QData)((IData)(((1U & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__toint 
							>> 0x1fU)))
					  ? 0xffffffffU
					  : 0U))) << 0x20U) 
		       | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__toint))))
	        : (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr) 
		       ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_npc_misaligned)))
		    ? (((QData)((IData)((0xffffffU 
					 & VL_NEGATE_I((IData)(
							       (1U 
								& (IData)(
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2560 
									   >> 0x27U)))))))) 
			<< 0x28U) | (VL_ULL(0xffffffffff) 
				     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2560))
		    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289901
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_mem;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247723
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_pc 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_pc
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274299
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen 
	= ((IData)(vlTOPp->TestHarness__DOT__dut_reset)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen)
		     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__killm)
			 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1162)
			 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1166))
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1162)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274415
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1218) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd 
		= (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
			    >> 7U));
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:238766
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_tag 
	    = (0x1ffU & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))
			  ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_valid)
				   ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_bits_tag) 
					    << 3U))
				   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid)
				       ? (2U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__req_arb_io_out_bits_tag) 
						<< 3U))
				       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid)
					   ? (3U | 
					      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__req_arb_io_out_bits_tag) 
					       << 3U))
					   : (4U | 
					      ((0x1f0U 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						   >> 3U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_fp) 
						  << 3U))))))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247730
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_data 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_data
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_2);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_585 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:277772
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_84) {
	if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_1_typ = 3U;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:277742
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_84) {
	if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot) 
		      >> 1U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_0_typ = 3U;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289907
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_sfence)
	        ? (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)) 
		    << 1U) | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)))
	        : (((0x4000U == (0x4000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		    << 2U) | ((((0x40U == (0x40U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
				| (0x2000U == (0x2000U 
					       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			       << 1U) | (0x1000U == 
					 (0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3064 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   & (QData)((IData)((0xfU & (((IData)(1U) 
				       << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))) 
				      - (IData)(1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_715 
	= ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr) 
		   | (1U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))) 
		  << 1U)) | (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247489
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_162)
	       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_176)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247737
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_168) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_3_xcpt_pf_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_xcpt_pf_inst)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290129
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_sel 
	= (1U & (((IData)(1U) << (1U & (~ (2U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
						 << 1U))))) 
		 >> 1U));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:239235
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_770) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached 
	    = (VL_ULL(0) == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array 
			     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits));
    }
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__next_inflight_onehot 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__inflight))
	    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__inflight))
	        ? 0U : 2U) : 1U);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:293713
    vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_2 = 0U;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247764
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_entry 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247779
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_xcpt_ae_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247782
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_replay 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:261334
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_1 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_2;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1088 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1094 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247758
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_taken 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247761
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bridx 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274169
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_swap23 
	    = (0x10U == (0x30000010U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274166
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren3 
	    = (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247767
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bht_history 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:215418
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d;
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allhalted 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allrunning 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_1 
	    << 2U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:264908
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren2;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289933
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fp 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_fp;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:264917
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290086
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killx)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289983
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_wxd;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:264911
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_singleOut 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:264914
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_wflags;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:264920
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ 
	    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		     >> 0x14U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289953
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jalr;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290139
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1 
		= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__out
		    : (((QData)((IData)(((1U & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__out 
							>> 0x1fU)))
					  ? 0xffffffffU
					  : 0U))) << 0x20U) 
		       | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__out))));
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_sfence 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
	   & (0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247770
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_pc 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1162 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen) 
		 >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1288 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274155
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1793 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1796 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1802 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1803 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247773
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_data 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__temp_array_0
	        : 0U);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2697 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247498
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_182)
	       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_198)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:247776
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_189) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_4_xcpt_pf_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290063
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits;
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:261335
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_2 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_0_q;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:253408
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274163
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_ren2 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289836
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_fp 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_fp;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290045
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2727 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290026
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2252) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_interrupt));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289920
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_wxd 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_wxd;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2087 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274175
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut 
	    = (((((0U == (0x42001000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		  | (0U == (0x22000004U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0U == (0x12002000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0U == (0x1040U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x40U == (0x2000050U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274196
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_wflags 
	    = ((((0U == (0x20000004U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		 | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x8000000U == (0x8002000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x80000000U == (0xc0000004U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3173 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jal) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289848
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jalr 
	    = (0x24U == (0x203cU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289887
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_xcpt) 
	       | (((0U == (0x10U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		   | (0U == (8U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  | (0x40U == (0x40U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:253389
    if (vlTOPp->TestHarness__DOT__dut_reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc = VL_ULL(0x10040);
    } else {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274143
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:274147
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_fpu_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits;
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_2);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_mask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4) 
	     << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3) 
			<< 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2) 
				  << 2U))) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1) 
					       << 1U) 
					      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:253417
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__bad_va) 
	       | (VL_ULL(0) != ((~ (VL_ULL(0x200000000) 
				    | ((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))
					  ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2539)
					  : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2539) 
					& (((QData)((IData)(
							    (((((0x10000U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
									     >> 8U)) 
								    << 0x10U)) 
								| ((0x8000U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
										>> 8U)) 
								       << 0xfU)) 
								   | (0x4000U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
										>> 8U)) 
									 << 0xeU)))) 
							       | ((0x2000U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
									       >> 8U)) 
								      << 0xdU)) 
								  | (0x1000U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
										>> 8U)) 
									<< 0xcU)))) 
							      | (((0x800U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
									       >> 8U)) 
								      << 0xbU)) 
								  | (0x400U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
										>> 8U)) 
									<< 0xaU))) 
								 | ((0x200U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
										>> 8U)) 
									<< 9U)) 
								    | (0x100U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
										>> 8U)) 
									  << 8U))))) 
							     | ((((0x80U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
									       >> 8U)) 
								      << 7U)) 
								  | (0x40U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
										>> 8U)) 
									<< 6U))) 
								 | ((0x20U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
										>> 8U)) 
									<< 5U)) 
								    | (0x10U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
										>> 8U)) 
									  << 4U)))) 
								| (((8U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
										>> 8U)) 
									<< 3U)) 
								    | (4U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
										>> 8U)) 
									  << 2U))) 
								   | ((2U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
										>> 8U)) 
									  << 1U)) 
								      | (1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
										>> 8U))))))))) 
					    << 0x10U) 
					   | (QData)((IData)(
							     (((((0x8000U 
								  & ((IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
									      >> 8U)) 
								     << 0xfU)) 
								 | (0x4000U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
										>> 8U)) 
								       << 0xeU))) 
								| ((0x2000U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
										>> 8U)) 
								       << 0xdU)) 
								   | (0x1000U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
										>> 8U)) 
									 << 0xcU)))) 
							       | (((0x800U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
										>> 8U)) 
								       << 0xbU)) 
								   | (0x400U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
										>> 8U)) 
									 << 0xaU))) 
								  | ((0x200U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
										>> 8U)) 
									 << 9U)) 
								     | (0x100U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
										>> 8U)) 
									   << 8U))))) 
							      | ((((0x80U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
										>> 8U)) 
								       << 7U)) 
								   | (0x40U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
										>> 8U)) 
									 << 6U))) 
								  | ((0x20U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
										>> 8U)) 
									 << 5U)) 
								     | (0x10U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
										>> 8U)) 
									   << 4U)))) 
								 | (((8U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
										>> 8U)) 
									 << 3U)) 
								     | (4U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
										>> 8U)) 
									   << 2U))) 
								    | ((2U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
										>> 8U)) 
									   << 1U)) 
								       | (1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
										>> 8U))))))))))) 
				       | (QData)((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
								     >> 0xaU)))))))) 
				& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146 
	= ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
	      >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv 
	= vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv;
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:251662
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_imem_bht_update_valid) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) {
	    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2582)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2586))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388 
		    = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken) 
			<< 7U) | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
					   >> 1U)));
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_bht_advance_valid) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1490;
		}
	    }
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2582)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2586))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_btb_resp_bht_history;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_bht_advance_valid) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1490;
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_bht_advance_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1388 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1490;
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:253370
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	= (VL_ULL(0xffffffffff) & (~ (VL_ULL(1) | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_249))));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246832
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246827
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246822
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246817
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246812
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246807
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246802
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x19U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246797
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x18U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246792
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246787
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246782
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246777
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246772
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246767
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246762
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246757
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246752
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246747
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246742
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246737
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246732
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246727
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246722
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246717
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246712
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246707
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246702
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246697
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246692
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246687
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246682
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246677
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:246837
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293) {
	if ((0x20U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351;
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290081
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_btb_resp_bht_history 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_bht_history;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289943
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_branch;
	}
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290179
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2619)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
			 ^ ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__slt)
			     : (VL_ULL(0) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2))));
	}
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_2);
    }
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:290042
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2324) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_bht_history 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_188)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289842
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_branch 
	    = (0x60U == (0x74U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2600 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2384 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:289894
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_xcpt)
	        ? 0U : ((((((((0x2010U == (0x2006054U 
					   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			      | (0x2010U == (0x6074U 
					     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			     | (0x4040U == (0x4058U 
					    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			    | (0x40000030U == (0x40000074U 
					       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			   | (0x40001010U == (0x40003054U 
					      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			  << 3U) | ((((((0x2010U == 
					 (0x2002054U 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
					| (0x2010U 
					   == (0x2074U 
					       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				       | (0x4010U == 
					  (0x40004054U 
					   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				      | (0x4010U == 
					 (0x5054U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				     | (0x4040U == 
					(0x4058U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				    << 2U)) | (((((
						   ((((0x40U 
						       == 
						       (0x4054U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
						      | (0x2040U 
							 == 
							 (0x2058U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						     | (0x3010U 
							== 
							(0x3054U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						    | (0x6010U 
						       == 
						       (0x6054U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						   | (0x2002030U 
						      == 
						      (0x2002074U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						  | (0x40000030U 
						     == 
						     (0x40000074U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						 | (0x40001010U 
						    == 
						    (0x40001054U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						<< 1U) 
					       | ((((0x1010U 
						     == 
						     (0x3054U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
						    | (0x1040U 
						       == 
						       (0x1058U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						   | (0x5010U 
						      == 
						      (0x5054U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						  | (0x2001030U 
						     == 
						     (0x2001074U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))))));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:279678
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history;
	}
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__cmdHi 
	= ((1U == (5U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	   | (2U == (2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_55 
	= ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_2);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_0 
	    = (0x1fffe00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0x29U)))
			       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					  >> 0x20U))
			       : 0U) << 9U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_1 
	    = (0x3fffc00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0x2aU)))
			       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					  >> 0x20U))
			       : 0U) << 0xaU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_2 
	    = (0x7fff800U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0x2bU)))
			       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					  >> 0x20U))
			       : 0U) << 0xbU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_0 
	    = (0xffff000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0x2cU)))
			       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					  >> 0x20U))
			       : 0U) << 0xcU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_1 
	    = (0x1fffe000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0x2dU)))
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					   >> 0x20U))
			        : 0U) << 0xdU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_2 
	    = (0x3fffc000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0x2eU)))
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					   >> 0x20U))
			        : 0U) << 0xeU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_0 
	    = (0x7fff8000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0x2fU)))
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					   >> 0x20U))
			        : 0U) << 0xfU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_0 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_0 
	    = (0x1fffe00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 9U)))
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			       : 0U) << 9U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_1 
	    = (0x3fffc00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0xaU)))
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			       : 0U) << 0xaU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_2 
	    = (0x7fff800U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0xbU)))
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			       : 0U) << 0xbU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_0 
	    = (0xffff000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					     >> 0xcU)))
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			       : 0U) << 0xcU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_1 
	    = (0x1fffe000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0xdU)))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			        : 0U) << 0xdU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_2 
	    = (0x3fffc000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0xeU)))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			        : 0U) << 0xeU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_2 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__temp_array_1
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_0 
	    = (0x7fff8000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					      >> 0xfU)))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			        : 0U) << 0xfU));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_1 
	    = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__temp_array_0
	        : 0U);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240049
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__temp_array_1 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT___GEN_4);
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240046
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__temp_array_0 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_0 
		^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_1) 
	       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_2);
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_0 
	    = (0x7fff8U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 0x23U)))
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					>> 0x20U)) : 0U) 
			   << 3U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_1 
	    = (0xffff0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 0x24U)))
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					>> 0x20U)) : 0U) 
			   << 4U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_2 
	    = (0x1fffe0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 0x25U)))
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					 >> 0x20U))
			      : 0U) << 5U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_0 
	    = (0x3fffc0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 0x26U)))
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					 >> 0x20U))
			      : 0U) << 6U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_1 
	    = (0x7fff80U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 0x27U)))
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					 >> 0x20U))
			      : 0U) << 7U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_2 
	    = (0xffff00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 0x28U)))
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					 >> 0x20U))
			      : 0U) << 8U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_0 
	    = (0xffffU & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					 >> 0x20U)))
			   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
				      >> 0x20U)) : 0U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_1 
	    = (0x1fffeU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 0x21U)))
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					>> 0x20U)) : 0U) 
			   << 1U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_2 
	    = (0x3fffcU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 0x22U)))
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
					>> 0x20U)) : 0U) 
			   << 2U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_0 
	    = (0x7fff8U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 3U)))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			     : 0U) << 3U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_1 
	    = (0xffff0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 4U)))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			     : 0U) << 4U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_2 
	    = (0x1fffe0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 5U)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			      : 0U) << 5U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_0 
	    = (0x3fffc0U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 6U)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			      : 0U) << 6U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_1 
	    = (0x7fff80U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 7U)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			      : 0U) << 7U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_2 
	    = (0xffff00U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					    >> 8U)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			      : 0U) << 8U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240037
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_0 
	    = (0xffffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data))
			   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			   : 0U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240040
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_1 
	    = (0x1fffeU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 1U)))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			     : 0U) << 1U));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:240043
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_2 
	    = (0x3fffcU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
					   >> 2U)))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data)
			     : 0U) << 2U));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_224_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile
	[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_222_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__34(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__34\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__37(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__37\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts_io_d));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 1U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 2U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 3U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 4U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 5U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 6U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 7U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 8U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 9U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xaU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xbU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xcU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xdU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xeU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0xfU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x10U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x11U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x12U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x13U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x14U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x15U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x16U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x17U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x18U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x19U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1aU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1bU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1cU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1dU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1eU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_d 
					       >> 0x1fU)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_35)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
					 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_37) 
					    != (1U 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_35)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37) 
					    != (1U 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_26)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_32)));
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
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__38(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__38\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
	      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
	      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_305) 
	      > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_1)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_26)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_32)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_300) 
	      > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_d)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_d) 
		    >> 1U)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_35)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_26)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_32)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37) 
		 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_q 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__42(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__42\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1184 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1069) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1173 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1184 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1069) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1173 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1412 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1299) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1401 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1188 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1370 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1257)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1359 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1210 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1087) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1199 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1422 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1299) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1411 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1210 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1087) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1199 
	       < vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1198 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1075) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1187 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1438 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1315) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1427 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1548 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1425)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1537 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1000 
	= ((((0U == (((vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[1U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[2U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_877[3U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_989 
	       < vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2243 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2120) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2232 
	       < vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2703 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2580)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2692 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2595 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2472)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2584 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_938 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_825)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_927 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_938 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_825)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_927 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1380 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1257)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1369 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1500 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1377)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1489 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1500 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1377)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1489 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3843 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)) 
		  | ((0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					    >> 0xcU))) 
		     == (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					       >> 0xcU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1138 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_partial_insn_valid)) 
		  | (7U & ((IData)(3U) << (1U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc 
							 >> 1U)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3843 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem_type)) 
		  | ((0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
					    >> 0xcU))) 
		     == (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					       >> 0xcU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_9 
	= ((((0xffffffc0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_294) 
			     << 6U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290)) 
	    < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1065 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1043)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_270 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_243 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1212 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1189)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1372 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1299 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_988 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_965)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1148 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1075 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_981 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_958)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1144 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1069 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_981 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_958)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1144 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1069 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1197 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1183)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_266 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_280 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1207 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1187)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x1c000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x1c000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x3ff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x3ff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_429 
	= ((1U & (6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= ((1U & (6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x10000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_976 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_956)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x10000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_976 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_956)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2098 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2081)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1875 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1875 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1875 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1875 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1463 
	= (((((((0U == (3U & (2U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
				    >> 3U)))) | (1U 
						 == 
						 (3U 
						  & (2U 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
							>> 3U))))) 
	       | (0x10U == (0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)))) 
	      | (0x11U == (0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)))) 
	     | (0x13U == (0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)))) 
	    | (0x12U == (0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2568 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2545)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2568 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2545)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2568 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2545)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2568 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2545)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2108 
	= (((0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2085)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2553 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2539)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2553 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2539)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2553 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2539)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2553 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2539)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2093 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2079)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1871 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1871 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1871 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1871 
	= ((((((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x10000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
			       & (QData)((IData)((0x80000000U 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								    (0x60000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x3000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2573 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2547) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2573 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2547) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2573 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2547) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2573 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2547) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2113 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2087) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2344 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2327)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2344 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2327)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2344 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2327)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2344 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2327)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2339 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2325)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2339 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2325)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2339 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2325)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2339 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2325)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_243 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_243 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_243 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_243 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	      | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	     | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2354 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2653 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2580) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2354 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2653 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2580) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2354 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2653 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2580) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2354 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2331)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2653 
	= (1U & ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2580) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_239 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2349 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_239 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2349 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_239 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2349 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_239 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2349 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_199 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2359 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2333) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_199 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2359 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2333) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_199 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2359 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2333) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_199 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2359 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2333) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2311 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2289)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1355 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1333)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1355 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1333)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2419 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2397)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1381)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1377)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x7fffffU & ((IData)(0xffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_478 
	= (((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_239 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x7fffffU & ((IData)(0xffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_429 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_478 
	= (((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_983 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_963)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_973 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_959)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_266 
	= (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_280 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1223 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1203)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1213 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1199)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1267 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1251)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_845 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1885 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2005 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2045 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2563 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2543)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1885 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2005 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2045 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2563 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2543)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2005 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2045 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2563 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2543)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1885 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2005 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2045 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2563 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2543)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1473 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1535 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1609 
	= (((0x10U == (0x10U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data))) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2103 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2083)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1043 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1043 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_855 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_860 
	= (((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2301 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2285)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1345 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1345 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1329)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2409 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2393)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1235 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3107)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1213)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1240 
	= (((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3107) 
		   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1215)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut_reset = (1U & ((IData)(vlTOPp->reset) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_q 
						    >> 1U)));
}
