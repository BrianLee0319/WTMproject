// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__45(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__45\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1311,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp1312,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp1314,95,0,3);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp1320,95,0,3);
    //char	__VpadToAlign68[4];
    VL_SIGW(__Vtemp1321,95,0,3);
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp1323,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
		 | (~ (0x3fU & ((IData)(7U) << (3U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1324 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1297) 
		   | (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1297) 
			       << 1U))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_270 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__in_ar_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_in_b_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_200 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___GEN_11 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_257 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_1 
	= ((4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_io_ip) 
		  << 2U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_0));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_1 
	= ((4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1_io_ip) 
		  << 2U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_0));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_deq 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_473 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_472));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_deq 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_676 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543)
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543)
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_473 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_472));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_io_enq_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_enq_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1348 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1348 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1348 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT___GEN_14 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_940 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3107 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_370 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_360) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_360) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_111 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_101) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_101) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_58 
	= ((0xff00ffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_48 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_48 
						   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf))) 
	   & (0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			    << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				      >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_75 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_65) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_65) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1907 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___GEN_16 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1348 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1348 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1348 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3292 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3289)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2439 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2439 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2439 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2439 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1979 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1086));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_b_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_0_b_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2923 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
				      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___GEN_12 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_io_enq_valid 
	= (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1_io_enq_valid 
	= (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2_io_enq_valid 
	= (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  >> 2U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3_io_enq_valid 
	= (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  >> 3U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4_io_enq_valid 
	= (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  >> 4U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5_io_enq_valid 
	= (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  >> 5U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_96 
	= ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	   & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	      & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		 & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		    & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		       & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			  & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			     & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				& ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				   & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				       ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_44))
				       : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44))
					   : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					       ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44))
					       : ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44))
						    : 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2494 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2485) 
	    << 1U) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
			     << 1U) >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2485))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__fpu_kill_mem 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt_io_nack_mem));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1462 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_inValid) 
	   & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_144 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1482 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1_io_inValid) 
	   & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_144 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
	= (((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_67 
			     >> 0x20U))) << 0x20U) 
	   | (QData)((IData)(((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						<< 3U) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						  >> 0x1dU)))))
			       ? ((0x80000000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
							   >> 0x20U)) 
						  << 0x1fU)) 
				  | ((0x7f800000U & 
				      (((VL_GTS_III(1,10,10, 0x82U, 
						    (0x1ffU 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
								>> 0x17U))))
					  ? 0U : ((0x1ffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
							      >> 0x17U))) 
						  - (IData)(0x81U))) 
					| ((((3U == 
					      (3U & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
							     >> 0x1eU)))) 
					     & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
							>> 0x1dU))) 
					    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_87))
					    ? 0xffU
					    : 0U)) 
				       << 0x17U)) | 
				     (0x7fffffU & (
						   VL_GTS_III(1,10,10, 0x82U, 
							      (0x1ffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
									  >> 0x17U))))
						    ? 
						   (0xffffffU 
						    & ((0xffffffU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_95 
							   >> 1U)) 
						       >> 
						       (0x1fU 
							& ((IData)(1U) 
							   - 
							   (0x1ffU 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
								       >> 0x17U)))))))
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_87)
						     ? 0U
						     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_95)))))
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_67)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__normalCase_S 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
		  ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
		     & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))
		  : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
		     & (~ (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isNaN) 
			    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf)) 
			   | (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
					    << 3U) 
					   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
					      >> 0x1dU)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp_io_lt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros)) 
	      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
		  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U])) 
		 | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs)) 
		    & (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags))) 
			& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags))) 
		       | ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem 
	= (VL_ULL(0xffffffffffffff) & (((VL_ULL(0x7fffffffffffff) 
					 & (((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S)))
					     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
						<< 1U)
					     : VL_ULL(0))) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_193)
					    ? (((QData)((IData)(
								(3U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
									     >> 0x33U)) 
								    - (IData)(1U))))) 
						<< 0x36U) 
					       | (VL_ULL(0x3ffffffffffff8) 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
						     << 3U)))
					    : VL_ULL(0))) 
				       | ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
					   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
					      << 1U)
					   : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				  >> 0x1dU)))) & (0U 
						  == 
						  (7U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
							      >> 0x1dU))))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN)) 
	    & (0U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				    >> 0x1dU))))) & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
							     >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN) 
	   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
		 >> 0x16U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf)) 
	   | (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				   >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_193 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_inexact 
	= ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				<< 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x1fU)))
	    ? (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig)))
	    : (0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				       >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__complUnroundedInt 
	= ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
	    ? (~ (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U])) 
		   << 0x3eU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U])) 
				 << 0x1eU) | ((QData)((IData)(
							      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U])) 
					      >> 2U))))
	    : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U])) 
		<< 0x3eU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U])) 
			      << 0x1eU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U])) 
					   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact 
	= ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				<< 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					   >> 0x1fU)))
	    ? (0U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U]))
	    : (0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				       >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3639 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3636)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_581 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	      & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_2_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2_io_in_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_2_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter_io_out_0_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__empty)) 
	   & (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___T_223 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__empty)) 
	      & (0x2bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_577 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__empty)) 
	      & (0x5bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_233 
	= (1U & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe)
		     ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)) 
			| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid))
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	    ? ((3U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
	        ? 3U : ((2U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
			 ? 3U : ((1U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
				  ? 4U : ((0U == (8U 
						  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
					   ? 5U : (
						   (7U 
						    == 
						    (8U 
						     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						    ? 0U
						    : 
						   ((6U 
						     == 
						     (8U 
						      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						     ? 0U
						     : 
						    ((5U 
						      == 
						      (8U 
						       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						      ? 4U
						      : 
						     ((4U 
						       == 
						       (8U 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						       ? 2U
						       : 
						      ((0xbU 
							== 
							(8U 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						        ? 1U
						        : 
						       ((0xaU 
							 == 
							 (8U 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
							 ? 1U
							 : 
							((9U 
							  == 
							  (8U 
							   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
							  ? 2U
							  : 
							 ((8U 
							   == 
							   (8U 
							    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
							   ? 5U
							   : 0U))))))))))))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_report_param)
	        : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state))
		    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_report_param)
		    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe)
		        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)
			    ? 5U : ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe_state_state))
				     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_report_param)
				     : 5U)) : 5U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2280 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2281 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2175 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543)
		     : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2245 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2246 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_1 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_id)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_7 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_id)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___GEN_16 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1278 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1278 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1278 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1824 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(
								 (0x2000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1823 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x40000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1821 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1822 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___T_227 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_44)) 
	   & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___GEN_10 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_44)) 
	   & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_1 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__empty)) 
	   & (1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__lastGrant)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1144 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_0_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_3_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_2_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_1_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (0U == (0xa010000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT___T_78) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__count))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT___T_78) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__count))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT___T_78) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__count))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT___T_78) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__count))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_624 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_623));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_w_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_623));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_561 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418) 
	   | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_510 
	= (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418 
		     >> 3U) | (0x1feU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418 
					 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_488 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417) 
	   | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417) 
		       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_498 
	= (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417)) 
		    | (0x1feU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417)) 
				 << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__replaying))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__replaying))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2494 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2485) 
	    << 1U) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
			     << 1U) >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2485))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__stallResp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_xd___05FT_63_data) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_44));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_0 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_44)) 
	   & (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__replaying))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_c_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_1_c_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_264 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___GEN_11 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_321 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__w_full))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1881 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(
								 (0x2000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1880 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x40000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1878 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1879 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1448 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1445)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_334 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__do_deq 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__r_full))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__in_ar_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__r_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1677)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_595 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_44)) 
	   & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___GEN_10 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_44)) 
	   & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_2 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__empty)) 
	   & (2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__lastGrant)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT___T_100 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT___T_99) 
	   | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_out_valid 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_chosen))
	    ? (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state))
	    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_chosen))
	        ? (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state))
	        : (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2323) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2321) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2323) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2321) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2320) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2318) 
					& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2320) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2318) 
						  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2317) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2315) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2317) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2315) 
			      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2314) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2312) 
					  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2314) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2312) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4340 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4339)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4324)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4339)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4324)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4290)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_ld))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4290)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_st))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4289_ae_st));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_292 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_571 
	= (0x1ffU & ((0x1f8U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
				>> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_194) 
					   & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197) 
						 - (IData)(1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_last 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3787)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3784)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT___T_63 
	= ((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
		     >> 3U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT___T_63 
	= ((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
		     >> 3U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_63 
	= ((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
		     >> 3U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_84) 
		 ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= (((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
				     >> 0x1dU)))) | 
	    (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
				     >> 0x1dU))))) 
	   | VL_GTS_III(1,11,11, 0U, (0x7ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4058 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3121 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3120));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3159 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3120));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_readwrite 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_read) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_write));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_741 
	= (((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
			     >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_728)
	       : 0U) | ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))
			 ? 0xfU : 0U)) << 4U) | ((1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 2U)))
						  ? 0U
						  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_728)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_697 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
	   | ((0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
				   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
					     >> 0x1cU)))))
	       ? VL_ULL(0) : VL_ULL(0xe0400000)));
    VL_EXTEND_WI(76,23, __Vtemp1311, (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662)));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1312, __Vtemp1311, 0x35U);
    __Vtemp1314[0U] = (IData)((((QData)((IData)((0xfffU 
						 & (((0U 
						      == 
						      (7U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								  >> 0x1dU)))) 
						     | (6U 
							<= 
							(7U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								    >> 0x1dU)))))
						     ? 
						    ((0xe00U 
						      & ((IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								  >> 0x1dU)) 
							 << 9U)) 
						     | (0x1ffU 
							& ((IData)(0x100U) 
							   + (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								      >> 0x17U)))))
						     : 
						    ((IData)(0x700U) 
						     + 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								 >> 0x17U)))))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((QData)((IData)(
								 (0xfffU 
								  & __Vtemp1312[2U]))) 
						 << 0x28U) 
						| (((QData)((IData)(
								    __Vtemp1312[1U])) 
						    << 8U) 
						   | ((QData)((IData)(
								      __Vtemp1312[0U])) 
						      >> 0x18U))))));
    __Vtemp1314[1U] = (IData)(((((QData)((IData)((0xfffU 
						  & (((0U 
						       == 
						       (7U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								   >> 0x1dU)))) 
						      | (6U 
							 <= 
							 (7U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								     >> 0x1dU)))))
						      ? 
						     ((0xe00U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								   >> 0x1dU)) 
							  << 9U)) 
						      | (0x1ffU 
							 & ((IData)(0x100U) 
							    + (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								       >> 0x17U)))))
						      : 
						     ((IData)(0x700U) 
						      + 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
								  >> 0x17U)))))))) 
				 << 0x34U) | (VL_ULL(0xfffffffffffff) 
					      & (((QData)((IData)(
								  (0xfffU 
								   & __Vtemp1312[2U]))) 
						  << 0x28U) 
						 | (((QData)((IData)(
								     __Vtemp1312[1U])) 
						     << 8U) 
						    | ((QData)((IData)(
								       __Vtemp1312[0U])) 
						       >> 0x18U))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1314[0U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1314[1U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U])
	    : 0xe0080000U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
				 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_737 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
	   | ((0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
				   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
					     >> 0x1cU)))))
	       ? VL_ULL(0) : VL_ULL(0xe0400000)));
    VL_EXTEND_WI(76,23, __Vtemp1320, (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702)));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1321, __Vtemp1320, 0x35U);
    __Vtemp1323[0U] = (IData)((((QData)((IData)((0xfffU 
						 & (((0U 
						      == 
						      (7U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								  >> 0x1dU)))) 
						     | (6U 
							<= 
							(7U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								    >> 0x1dU)))))
						     ? 
						    ((0xe00U 
						      & ((IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								  >> 0x1dU)) 
							 << 9U)) 
						     | (0x1ffU 
							& ((IData)(0x100U) 
							   + (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								      >> 0x17U)))))
						     : 
						    ((IData)(0x700U) 
						     + 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								 >> 0x17U)))))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((QData)((IData)(
								 (0xfffU 
								  & __Vtemp1321[2U]))) 
						 << 0x28U) 
						| (((QData)((IData)(
								    __Vtemp1321[1U])) 
						    << 8U) 
						   | ((QData)((IData)(
								      __Vtemp1321[0U])) 
						      >> 0x18U))))));
    __Vtemp1323[1U] = (IData)(((((QData)((IData)((0xfffU 
						  & (((0U 
						       == 
						       (7U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								   >> 0x1dU)))) 
						      | (6U 
							 <= 
							 (7U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								     >> 0x1dU)))))
						      ? 
						     ((0xe00U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								   >> 0x1dU)) 
							  << 9U)) 
						      | (0x1ffU 
							 & ((IData)(0x100U) 
							    + (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								       >> 0x17U)))))
						      : 
						     ((IData)(0x700U) 
						      + 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
								  >> 0x17U)))))))) 
				 << 0x34U) | (VL_ULL(0xfffffffffffff) 
					      & (((QData)((IData)(
								  (0xfffU 
								   & __Vtemp1321[2U]))) 
						  << 0x28U) 
						 | (((QData)((IData)(
								     __Vtemp1321[1U])) 
						     << 8U) 
						    | ((QData)((IData)(
								       __Vtemp1321[0U])) 
						       >> 0x18U))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1323[0U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1323[1U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U])
	    : 0xe0080000U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
				 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1166 
	= ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen) 
		  >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1170 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1194 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask) 
		    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1218 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask) 
		    >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_84) 
		 ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_fmaCmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= (((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[2U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in1[1U] 
				     >> 0x1dU)))) | 
	    (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[2U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in2[1U] 
				     >> 0x1dU))))) 
	   | VL_GTS_III(1,14,14, 0U, (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_823 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_817) 
	   & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			      >> 0x17U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_424 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_418) 
	   & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_350 
	= (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325)) 
	    | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325))) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
	      >> 7U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_516 
	= ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
		      >> 0x14U)) | (0x7ffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
								     >> 0x1fU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_347 
	= (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325)) 
	    & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
		  >> 7U))) & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
					      >> 0xfU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_624 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316) 
	    & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
	      & (0xa001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_628 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316) 
	    & (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_359)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316) 
	    & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325)) 
		| (0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325))) 
	       | ((0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
	      & ((((0xa001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
		   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_432)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_418)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_359) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data)) 
	    << 0x20U) | (QData)((IData)(((0xffff0000U 
					  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data 
					     << 0x10U)) 
					 | (0xffffU 
					    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1067 
	= ((VL_ULL(0) == (VL_ULL(0xc8000000) & (VL_ULL(0x8000000) 
						^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
	   | (VL_ULL(0) == (VL_ULL(0xc8010000) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address 
	= (((((((VL_ULL(0) == (VL_ULL(0x1fffc000000) 
			       & (VL_ULL(0xc000000) 
				  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
		| (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
				 & (VL_ULL(0x2000000) 
				    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffffff000) 
				& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
	      | (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
			       & (VL_ULL(0x10000) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	     | (VL_ULL(0) == (VL_ULL(0x1fff0000000) 
			      & (VL_ULL(0x80000000) 
				 ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffe0000000) 
			     & (VL_ULL(0x60000000) 
				^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffffff000) & 
			    (VL_ULL(0x3000) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_61 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_349 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_157 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_205 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_301 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
	   < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
			  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__level 
	= (3U & ((((((((((((((((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
							     >> 0xdU))
						  : 0U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1)
						    ? (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
							       >> 0xdU))
						    : 0U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
							      >> 0xdU))
						   : 0U)) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
							     >> 0xdU))
						  : 0U)) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
							    >> 0xdU))
						 : 0U)) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
							   >> 0xdU))
					        : 0U)) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
							  >> 0xdU))
					       : 0U)) 
					  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7)
					      ? (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
							 >> 0xdU))
					      : 0U)) 
					 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
							>> 0xdU))
					     : 0U)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9)
					    ? (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
						       >> 0xdU))
					    : 0U)) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
						      >> 0xdU))
					   : 0U)) | 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
						   >> 0xdU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
							      >> 0xdU))
						   : 0U)) 
				    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_13)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
						   >> 0xdU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_14)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
							      >> 0xdU))
						   : 0U)) 
				  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_15)
				      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
						 >> 0xdU))
				      : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_16)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
							    >> 0xdU))
						 : 0U)) 
				| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_17)
				    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
					       >> 0xdU))
				    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_18)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
							  >> 0xdU))
					       : 0U)) 
			      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_19)
				  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
					     >> 0xdU))
				  : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_20)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
							>> 0xdU))
					     : 0U)) 
			    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_21)
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
					   >> 0xdU))
			        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_22)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
						      >> 0xdU))
					   : 0U)) | 
			  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_23)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
				       >> 0xdU)) : 0U)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_24)
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
					>> 0xdU)) : 0U)) 
			| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_25)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
				       >> 0xdU)) : 0U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_26)
			   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
				      >> 0xdU)) : 0U)) 
		      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_27)
			  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
				     >> 0xdU)) : 0U)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_28)
			 ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
				    >> 0xdU)) : 0U)) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_29)
		        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
				   >> 0xdU)) : 0U)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_30)
		       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
				  >> 0xdU)) : 0U)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_31)
		      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
				 >> 0xdU)) : 0U)) | 
		 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_32)
		   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
			      >> 0xdU)) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__partialPPN 
	= (0xfffffU & (((((((((((((((((((((((((((((
						   (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)
						        ? (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
								   >> 0x2aU))
						        : 0U) 
						      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1)
							  ? (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
								     >> 0x2aU))
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2)
							 ? (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
								    >> 0x2aU))
							 : 0U)) 
						    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3)
						        ? (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
								   >> 0x2aU))
						        : 0U)) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4)
						       ? (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
								  >> 0x2aU))
						       : 0U)) 
						  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5)
						      ? (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
								 >> 0x2aU))
						      : 0U)) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6)
						     ? (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
								>> 0x2aU))
						     : 0U)) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7)
						    ? (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
							       >> 0x2aU))
						    : 0U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
							      >> 0x2aU))
						   : 0U)) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
							     >> 0x2aU))
						  : 0U)) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
							    >> 0x2aU))
						 : 0U)) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
							   >> 0x2aU))
					        : 0U)) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
							  >> 0x2aU))
					       : 0U)) 
					  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_13)
					      ? (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
							 >> 0x2aU))
					      : 0U)) 
					 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_14)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
							>> 0x2aU))
					     : 0U)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_15)
					    ? (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
						       >> 0x2aU))
					    : 0U)) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_16)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
						      >> 0x2aU))
					   : 0U)) | 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_17)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
						   >> 0x2aU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_18)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
							      >> 0x2aU))
						   : 0U)) 
				    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_19)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
						   >> 0x2aU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_20)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
							      >> 0x2aU))
						   : 0U)) 
				  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_21)
				      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
						 >> 0x2aU))
				      : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_22)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
							    >> 0x2aU))
						 : 0U)) 
				| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_23)
				    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
					       >> 0x2aU))
				    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_24)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
							  >> 0x2aU))
					       : 0U)) 
			      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_25)
				  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
					     >> 0x2aU))
				  : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_26)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
							>> 0x2aU))
					     : 0U)) 
			    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_27)
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
					   >> 0x2aU))
			        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_28)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
						      >> 0x2aU))
					   : 0U)) | 
			  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_29)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
				       >> 0x2aU)) : 0U)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_30)
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
					>> 0x2aU)) : 0U)) 
			| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_31)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
				       >> 0x2aU)) : 0U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_32)
			   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
				      >> 0x2aU)) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
	= (((QData)((IData)((((((0x10000U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
					     << 0x10U)) 
				| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_32) 
				    << 0xfU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_31) 
						<< 0xeU))) 
			       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_30) 
				   << 0xdU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_29) 
					       << 0xcU))) 
			      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_28) 
				   << 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_27) 
					       << 0xaU)) 
				 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_26) 
				     << 9U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_25) 
					       << 8U)))) 
			     | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_24) 
				   << 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_23) 
					     << 6U)) 
				 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_22) 
				     << 5U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_21) 
					       << 4U))) 
				| ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_20) 
				     << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_19) 
					       << 2U)) 
				   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_18) 
				       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_17))))))) 
	    << 0x11U) | (QData)((IData)(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_16) 
					     << 0x10U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_15) 
						<< 0xfU) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_14) 
						  << 0xeU))) 
					   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_13) 
					       << 0xdU) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
						 << 0xcU))) 
					  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
					       << 0xbU) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
						 << 0xaU)) 
					     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
						 << 9U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
						   << 8U)))) 
					 | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
					       << 7U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
						 << 6U)) 
					     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5) 
						 << 5U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4) 
						   << 4U))) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
						 << 3U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2) 
						   << 2U)) 
					       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1) 
						   << 1U) 
						  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_242) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid) 
	      | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_171)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_387 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__nextPageRepl) 
		   + (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__updatePageHit)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__doTgtPageRepl))
		       ? 2U : 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageReplEn 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__updatePageHit))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageRepl)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__updatePageHit))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__updatePageHit)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageRepl));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_907 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_902) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_902)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1180 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1176)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1207 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1192) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1203));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1231 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 7U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1227)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1258 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1243) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1254));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1287 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0xeU) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1283)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1314 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1299) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1310));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1338 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x15U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1334)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1365 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1350) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1361));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__predicted_taken 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_664) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1507))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_resp_bits_target 
	= (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510)) 
	    & (0U != (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		      & (((((((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_27)) 
			      << 0x1bU) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_26)) 
					   << 0x1aU)) 
			    | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_25)) 
				<< 0x19U) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_24)) 
					     << 0x18U))) 
			   | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_23)) 
			       << 0x17U) | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_22)) 
					     << 0x16U) 
					    | ((3U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_21)) 
					       << 0x15U)))) 
			  | (((((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_20)) 
				<< 0x14U) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_19)) 
					     << 0x13U)) 
			      | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_18)) 
				  << 0x12U) | ((3U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_17)) 
					       << 0x11U))) 
			     | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_16)) 
				 << 0x10U) | (((3U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_15)) 
					       << 0xfU) 
					      | ((3U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_14)) 
						 << 0xeU))))) 
			 | ((((((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_13)) 
				<< 0xdU) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_12)) 
					    << 0xcU)) 
			      | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_11)) 
				  << 0xbU) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_10)) 
					      << 0xaU))) 
			     | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_9)) 
				 << 9U) | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_8)) 
					    << 8U) 
					   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_7)) 
					      << 7U)))) 
			    | (((((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_6)) 
				  << 6U) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_5)) 
					    << 5U)) 
				| (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_4)) 
				    << 4U) | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_3)) 
					      << 3U))) 
			       | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_2)) 
				   << 2U) | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_1)) 
					      << 1U) 
					     | (3U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_0))))))))))
	    ? ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1512))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1516_5
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___GEN_400)
	    : (((QData)((IData)(((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778))
				  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_5
				  : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778))
				      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_4
				      : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778))
					  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_3
					  : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_2
					      : ((1U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778))
						  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_1
						  : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pages_0))))))) 
		<< 0xeU) | (QData)((IData)((0x3fffU 
					    & ((((((((((((((((((((((((((((((1U 
									    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_0)
									    : 0U) 
									  | ((2U 
									      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_1)
									      : 0U)) 
									 | ((4U 
									     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_2)
									     : 0U)) 
									| ((8U 
									    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_3)
									    : 0U)) 
								       | ((0x10U 
									   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_4)
									   : 0U)) 
								      | ((0x20U 
									  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_5)
									  : 0U)) 
								     | ((0x40U 
									 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
									 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_6)
									 : 0U)) 
								    | ((0x80U 
									& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_7)
								        : 0U)) 
								   | ((0x100U 
								       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_8)
								       : 0U)) 
								  | ((0x200U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_9)
								      : 0U)) 
								 | ((0x400U 
								     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_10)
								     : 0U)) 
								| ((0x800U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_11)
								    : 0U)) 
							       | ((0x1000U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_12)
								   : 0U)) 
							      | ((0x2000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_13)
								  : 0U)) 
							     | ((0x4000U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_14)
								 : 0U)) 
							    | ((0x8000U 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_15)
							        : 0U)) 
							   | ((0x10000U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_16)
							       : 0U)) 
							  | ((0x20000U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_17)
							      : 0U)) 
							 | ((0x40000U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_18)
							     : 0U)) 
							| ((0x80000U 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_19)
							    : 0U)) 
						       | ((0x100000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_20)
							   : 0U)) 
						      | ((0x200000U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_21)
							  : 0U)) 
						     | ((0x400000U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_22)
							 : 0U)) 
						    | ((0x800000U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_23)
						        : 0U)) 
						   | ((0x1000000U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_24)
						       : 0U)) 
						  | ((0x2000000U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_25)
						      : 0U)) 
						 | ((0x4000000U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_26)
						     : 0U)) 
						| ((0x8000000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgts_27)
						    : 0U)) 
					       << 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2560 
	= (VL_ULL(0x1ffffffffff) & (VL_EXTENDS_QQ(41,40, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_pc) 
				    + VL_EXTENDS_QQ(41,40, 
						    (((QData)((IData)(
								      (0xffU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2559 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2559))))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_2 
	= ((4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1_io_ip) 
		  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_1));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_2 
	= ((4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_io_ip) 
		  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_1));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_714 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
						   ? 0xffU
						   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__46(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__46\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst 
	= (1U & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_28));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_947 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			 >> 0x23U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__47(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__47\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__48(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__48\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_328 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q) 
	     << 0xbU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
			  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_312)) 
			 << 9U)) | (((0x80U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_q) 
					       << 6U)) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
					<< 5U)) | (
						   (8U 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_q) 
						       << 3U)) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
						      << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_26 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q) 
		 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
	      >> 0xbU));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1180 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1110 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_26 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q) 
		 + ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8155 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts 
	= ((QData)((IData)((0x1aaaU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_328)))) 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_rdata 
	= (((((((((((((((((((((((((((((((((((((((((
						   (((0x7a1U 
						      == 
						      (0xfffU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							  >> 0x14U)))
						      ? 
						     (VL_ULL(0x2080000000000000) 
						      | ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
							   << 0x3bU) 
							  | ((QData)((IData)(
									     (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action) 
									       << 5U) 
									      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))) 
							     << 7U)) 
							 | (QData)((IData)(
									   ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
									      << 6U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
										<< 4U) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u) 
										<< 3U))) 
									    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
										<< 2U) 
									       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r))))))))
						      : VL_ULL(0)) 
						    | ((0x7a2U 
							== 
							(0xfffU 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							    >> 0x14U)))
						        ? 
						       (((QData)((IData)(
									 ((1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
										>> 0x26U)))
									   ? 0x1ffffffU
									   : 0U))) 
							 << 0x27U) 
							| vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address)
						        : VL_ULL(0))) 
						   | ((0x301U 
						       == 
						       (0xfffU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							   >> 0x14U)))
						       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa
						       : VL_ULL(0))) 
						  | ((0x300U 
						      == 
						      (0xfffU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							  >> 0x14U)))
						      ? 
						     ((((QData)((IData)(
									(0xaU 
									 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_status_sd) 
									    << 0x1fU)))) 
							<< 0x20U) 
						       | ((QData)((IData)(
									  ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr) 
									     << 4U) 
									    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw) 
									       << 3U)) 
									   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm) 
									       << 2U) 
									      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum)))))) 
							  << 0x12U)) 
						      | (QData)((IData)(
									((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv) 
									     << 0x11U) 
									    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs) 
									       << 0xfU)) 
									   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs) 
									       << 0xdU) 
									      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp) 
										<< 0xbU))) 
									  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp) 
									      << 8U) 
									     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie) 
										<< 7U))) 
									 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie) 
									      << 5U) 
									     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie) 
										<< 3U)) 
									    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie) 
									       << 1U))))))
						      : VL_ULL(0))) 
						 | (QData)((IData)(
								   ((0x305U 
								     == 
								     (0xfffU 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
									 >> 0x14U)))
								     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec
								     : 0U)))) 
						| (QData)((IData)(
								  ((0x344U 
								    == 
								    (0xfffU 
								     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
									>> 0x14U)))
								    ? 
								   (0x1aaaU 
								    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_328))
								    : 0U)))) 
					       | ((0x304U 
						   == 
						   (0xfffU 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						       >> 0x14U)))
						   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie
						   : VL_ULL(0))) 
					      | ((0x340U 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
						  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch
						  : VL_ULL(0))) 
					     | ((0x341U 
						 == 
						 (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
						 ? 
						(((QData)((IData)(
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_704 
									       >> 0x27U)))
								    ? 0U
								    : 0xffffffU))) 
						  << 0x28U) 
						 | (VL_ULL(0xffffffffff) 
						    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_704)))
						 : VL_ULL(0))) 
					    | ((0x343U 
						== 
						(0xfffU 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						    >> 0x14U)))
					        ? (
						   ((QData)((IData)(
								    ((1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr 
										>> 0x27U)))
								      ? 0xffffffU
								      : 0U))) 
						    << 0x28U) 
						   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr)
					        : VL_ULL(0))) 
					   | ((0x342U 
					       == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
					       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause
					       : VL_ULL(0))) 
					  | (QData)((IData)(
							    ((0x7b0U 
							      == 
							      (0xfffU 
							       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								  >> 0x14U)))
							      ? 
							     (0x40000000U 
							      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
								   << 0xfU) 
								  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks) 
								      << 0xdU) 
								     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku) 
									<< 0xcU))) 
								 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause) 
								     << 6U) 
								    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step) 
									<< 2U) 
								       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv)))))
							      : 0U)))) 
					 | ((0x7b1U 
					     == (0xfffU 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						    >> 0x14U)))
					     ? (((QData)((IData)(
								 ((1U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_736 
									      >> 0x27U)))
								   ? 0U
								   : 0xffffffU))) 
						 << 0x28U) 
						| (VL_ULL(0xffffffffff) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_736)))
					     : VL_ULL(0))) 
					| ((0x7b2U 
					    == (0xfffU 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						   >> 0x14U)))
					    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch
					    : VL_ULL(0))) 
				       | (QData)((IData)(
							 ((1U 
							   == 
							   (0xfffU 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							       >> 0x14U)))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags)
							   : 0U)))) 
				      | (QData)((IData)(
							((2U 
							  == 
							  (0xfffU 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							      >> 0x14U)))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)
							  : 0U)))) 
				     | (QData)((IData)(
						       ((3U 
							 == 
							 (0xfffU 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							     >> 0x14U)))
							 ? 
							(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm) 
							  << 5U) 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags))
							 : 0U)))) 
				    | ((0xb00U == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_299
				        : VL_ULL(0))) 
				   | ((0xb02U == (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
				       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_286
				       : VL_ULL(0))) 
				  | (QData)((IData)(
						    ((0x306U 
						      == 
						      (0xfffU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							  >> 0x14U)))
						      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcounteren
						      : 0U)))) 
				 | ((0xc00U == (0xfffU 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						   >> 0x14U)))
				     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_299
				     : VL_ULL(0))) 
				| ((0xc02U == (0xfffU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_286
				    : VL_ULL(0))) | 
			       ((0x100U == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
				 ? ((((QData)((IData)(
						      (2U 
						       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_status_sd) 
							  << 0x1fU)))) 
				      << 0x20U) | ((QData)((IData)(
								   (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr) 
								     << 1U) 
								    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum)))) 
						   << 0x12U)) 
				    | (QData)((IData)(
						      (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs) 
							  << 0xfU) 
							 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs) 
							    << 0xdU)) 
							| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp) 
							   << 8U)) 
						       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie) 
							   << 5U) 
							  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie) 
							     << 1U))))))
				 : VL_ULL(0))) | ((0x144U 
						   == 
						   (0xfffU 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						       >> 0x14U)))
						   ? 
						  ((QData)((IData)(
								   (0x1aaaU 
								    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_328)))) 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg)
						   : VL_ULL(0))) 
			     | ((0x104U == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
				 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
				    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg)
				 : VL_ULL(0))) | ((0x140U 
						   == 
						   (0xfffU 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						       >> 0x14U)))
						   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sscratch
						   : VL_ULL(0))) 
			   | ((0x142U == (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 0x14U)))
			       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_scause
			       : VL_ULL(0))) | ((0x143U 
						 == 
						 (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
						 ? 
						(((QData)((IData)(
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sbadaddr 
									       >> 0x27U)))
								    ? 0xffffffU
								    : 0U))) 
						  << 0x28U) 
						 | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sbadaddr)
						 : VL_ULL(0))) 
			 | ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						  >> 0x14U)))
			     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sptbr_mode)) 
				 << 0x3cU) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sptbr_ppn)
			     : VL_ULL(0))) | ((0x141U 
					       == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
					       ? (((QData)((IData)(
								   ((1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_828 
										>> 0x27U)))
								     ? 0U
								     : 0xffffffU))) 
						   << 0x28U) 
						  | (VL_ULL(0xffffffffff) 
						     & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_828)))
					       : VL_ULL(0))) 
		       | ((0x105U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						>> 0x14U)))
			   ? (((QData)((IData)(((1U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec 
							    >> 0x26U)))
						 ? 0x1ffffffU
						 : 0U))) 
			       << 0x27U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec)
			   : VL_ULL(0))) | (QData)((IData)(
							   ((0x106U 
							     == 
							     (0xfffU 
							      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								 >> 0x14U)))
							     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_scounteren
							     : 0U)))) 
		     | ((0x303U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					      >> 0x14U)))
			 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg
			 : VL_ULL(0))) | ((0x302U == 
					   (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
					   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_medeleg
					   : VL_ULL(0))) 
		   | ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					    >> 0x14U)))
		       ? (((QData)((IData)(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
						<< 0x1fU) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
						  << 0x1bU)) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
						  << 0x1aU) 
						 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
						     << 0x19U) 
						    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
						       << 0x18U)))) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
						  << 0x17U) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
						    << 0x13U)) 
						| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
						    << 0x12U) 
						   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
						       << 0x11U) 
						      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
							 << 0x10U))))) 
					    | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
						  << 0xfU) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
						    << 0xbU)) 
						| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
						    << 0xaU) 
						   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
						       << 9U) 
						      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
							 << 8U)))) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
						    << 7U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
						      << 3U)) 
						  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
						      << 2U) 
						     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
							 << 1U) 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r)))))))) 
			   << 0x20U) | (QData)((IData)(
						       ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
							    << 0x1fU) 
							   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
							      << 0x1bU)) 
							  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
							      << 0x1aU) 
							     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
								 << 0x19U) 
								| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
								   << 0x18U)))) 
							 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
							      << 0x17U) 
							     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
								<< 0x13U)) 
							    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
								<< 0x12U) 
							       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
								   << 0x11U) 
								  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
								     << 0x10U))))) 
							| (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
							      << 0xfU) 
							     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
								<< 0xbU)) 
							    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
								<< 0xaU) 
							       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
								   << 9U) 
								  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
								     << 8U)))) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l) 
								<< 7U) 
							       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
								  << 3U)) 
							      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
								  << 2U) 
								 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
								     << 1U) 
								    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r)))))))))
		       : VL_ULL(0))) | (QData)((IData)(
						       ((0x3b0U 
							 == 
							 (0xfffU 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							     >> 0x14U)))
							 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr
							 : 0U)))) 
		 | (QData)((IData)(((0x3b1U == (0xfffU 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						   >> 0x14U)))
				     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr
				     : 0U)))) | (QData)((IData)(
								((0x3b2U 
								  == 
								  (0xfffU 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								      >> 0x14U)))
								  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr
								  : 0U)))) 
	       | (QData)((IData)(((0x3b3U == (0xfffU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						 >> 0x14U)))
				   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr
				   : 0U)))) | (QData)((IData)(
							      ((0x3b4U 
								== 
								(0xfffU 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								    >> 0x14U)))
							        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr
							        : 0U)))) 
	     | (QData)((IData)(((0x3b5U == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
				 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr
				 : 0U)))) | (QData)((IData)(
							    ((0x3b6U 
							      == 
							      (0xfffU 
							       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								  >> 0x14U)))
							      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr
							      : 0U)))) 
	   | (QData)((IData)(((0x3b7U == (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 0x14U)))
			       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr
			       : 0U))));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__50(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__50\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1211 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_805 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_202) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_461 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_395) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_202) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_584 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_395) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_202) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_805 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_202) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_461 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_395) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_202) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_584 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_395) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_202) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_805 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_202) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_461 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_395) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_202) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_584 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_395) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_202) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_590 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_186)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_741 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_186)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_510 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_186) 
	       | (0U == (0x1fff0000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_805 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_202) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_461 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_395) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_202) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_584 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_395) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_202) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_805 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_202) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_461 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_395) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_202) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_584 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_395) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_202) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_780 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_763)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_780 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_763)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_780 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_763)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_773 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_756)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_590 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_186)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_510 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_186) 
	       | (0U == (0x1fff0000U & (0x10000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_768 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_754)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_427 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_775 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_761)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_427 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1043 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1043 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_775 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_761)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_845 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_427 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1043 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1043 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_775 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_761)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_845 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_863 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_190) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_519 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_453) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_190) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_642 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_453) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_190) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_863 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_190) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_519 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_453) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_190) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_642 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_453) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_190) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_863 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_190) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_519 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_453) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_190) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_642 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_453) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_190) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_863 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_190) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_519 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_453) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_190) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_642 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_453) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_190) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1128 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty) 
	    | ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
	       & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
		  & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
		     & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			& ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			   & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			      & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				 & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				    & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				       & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
					  & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full)
					      : ((4U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty))
						   : 
						  ((2U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty))
						    : 
						   ((1U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full)
						     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full))))))))))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_780 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_857 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1037)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1037)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_933 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty) 
	    | ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	       & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			& ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			   & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			      & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				 & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				    & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				       & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
					  & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full)
					      : ((4U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))
						   : 
						  ((2U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty))
						    : 
						   ((1U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)
						     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full))))))))))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_293 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__empty) 
		  | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__empty))
		      : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__empty))
			  : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__empty))
			      : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__empty))
				  : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__empty))
				      : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__empty))
					  : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty))
					      : ((8U 
						  == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty))
						  : 
						 ((7U 
						   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__empty))
						   : 
						  ((6U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__empty))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						     ? 
						    (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__empty))
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						      ? 
						     (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__empty))
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						       ? 
						      (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						        ? 
						       (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							 ? 
							(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__empty))
							 : 
							(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__empty)))))))))))))))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_400 
	= (((0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x21U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_603 
	= ((0U == (0xfU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x21U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2445 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2431)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2553 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2539)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1795 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1875 
	= (1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
		   | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source))) 
		  | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2460 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2437)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2568 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2545)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1805 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1925 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1951 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2455 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2435)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1885 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2005 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_address)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2045 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2563 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2543)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset 
	= ((IData)(vlTOPp->TestHarness__DOT__dut_reset) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__53(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__53\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__54(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__54\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1135 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1055 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1039)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_824 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_824 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source) 
			      >> 3U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source) 
						    >> 3U)))) 
	       | (0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))) 
	      | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))) 
	     | (0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))) 
	    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_778 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_758)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_849 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_827)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2231 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2217)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_221 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2246 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2223)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2545 
	= (1U & ((~ (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2472) 
			   >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_217 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2241 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2221)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_191 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_231 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2251 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2225) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_251 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_io_enq_valid) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full))) 
		  | ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full)
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id___05FT_55_data)
			     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				>> 3U))) ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
					       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full))))
		      : (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1857 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_b_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_b_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1931 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_2006 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_2081 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_2_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_2_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2450 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2433)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1633 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1709 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1785 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1861 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT___T_37 
	= ((1U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_0) 
			 + (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_1) 
				  + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_2)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_c_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_c_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_488 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
		  | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__empty))
		      : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__empty))
			  : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__empty))
			      : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__empty))
				  : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__empty))
				      : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__empty))
					  : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__empty))
					      : ((8U 
						  == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__empty))
						  : 
						 ((7U 
						   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__empty))
						   : 
						  ((6U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__empty))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? 
						    (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__empty))
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? 
						     (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__empty))
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? 
						      (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__empty))
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? 
						       (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__empty))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							 ? 
							(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__empty))
							 : 
							(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__empty)))))))))))))))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_845 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT___T_88 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT___T_74)) 
		  | (0U == ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
			      << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
					 << 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
						   << 3U))) 
			    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
				<< 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
					   << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT___T_88 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT___T_74)) 
		  | (0U == ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
			      << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
					 << 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
						   << 3U))) 
			    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
				<< 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
					   << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT___T_88 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT___T_74)) 
		  | (0U == ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
			      << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
					 << 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
						   << 3U))) 
			    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
				<< 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
					   << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st)))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset 
	= ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__55(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__55\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1398 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1327 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1258 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_35 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q) 
		 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1179 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1124)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1320 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1272)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1342 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254) 
		 - ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready) 
		    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1398)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1327)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1398)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1327));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1271 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1258) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1268))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1258));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__56(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__56\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign260[4];
    VL_SIGW(__Vtemp1549,127,0,4);
    VL_SIGW(__Vtemp1550,127,0,4);
    VL_SIGW(__Vtemp1551,127,0,4);
    VL_SIGW(__Vtemp1552,159,0,5);
    //char	__VpadToAlign332[4];
    VL_SIGW(__Vtemp1557,95,0,3);
    //char	__VpadToAlign348[4];
    VL_SIGW(__Vtemp1558,95,0,3);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp1561,95,0,3);
    //char	__VpadToAlign380[4];
    VL_SIGW(__Vtemp1562,95,0,3);
    //char	__VpadToAlign396[4];
    VL_SIGW(__Vtemp1565,95,0,3);
    //char	__VpadToAlign412[4];
    VL_SIGW(__Vtemp1566,95,0,3);
    //char	__VpadToAlign428[4];
    VL_SIGW(__Vtemp1569,95,0,3);
    //char	__VpadToAlign444[4];
    VL_SIGW(__Vtemp1570,95,0,3);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp1573,95,0,3);
    //char	__VpadToAlign476[4];
    VL_SIGW(__Vtemp1574,95,0,3);
    //char	__VpadToAlign492[4];
    VL_SIGW(__Vtemp1577,95,0,3);
    //char	__VpadToAlign508[4];
    VL_SIGW(__Vtemp1578,95,0,3);
    //char	__VpadToAlign524[4];
    VL_SIGW(__Vtemp1581,95,0,3);
    //char	__VpadToAlign540[4];
    VL_SIGW(__Vtemp1582,95,0,3);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp1585,95,0,3);
    //char	__VpadToAlign572[4];
    VL_SIGW(__Vtemp1586,95,0,3);
    //char	__VpadToAlign588[4];
    VL_SIGW(__Vtemp1589,95,0,3);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp1590,95,0,3);
    //char	__VpadToAlign620[4];
    VL_SIGW(__Vtemp1593,95,0,3);
    //char	__VpadToAlign636[4];
    VL_SIGW(__Vtemp1594,95,0,3);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp1597,95,0,3);
    //char	__VpadToAlign668[4];
    VL_SIGW(__Vtemp1598,95,0,3);
    //char	__VpadToAlign684[4];
    VL_SIGW(__Vtemp1601,95,0,3);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp1602,95,0,3);
    //char	__VpadToAlign716[4];
    VL_SIGW(__Vtemp1605,95,0,3);
    //char	__VpadToAlign732[4];
    VL_SIGW(__Vtemp1606,95,0,3);
    //char	__VpadToAlign748[4];
    VL_SIGW(__Vtemp1609,95,0,3);
    //char	__VpadToAlign764[4];
    VL_SIGW(__Vtemp1610,95,0,3);
    //char	__VpadToAlign780[4];
    VL_SIGW(__Vtemp1613,95,0,3);
    //char	__VpadToAlign796[4];
    VL_SIGW(__Vtemp1614,95,0,3);
    //char	__VpadToAlign812[4];
    VL_SIGW(__Vtemp1617,95,0,3);
    //char	__VpadToAlign828[4];
    VL_SIGW(__Vtemp1618,95,0,3);
    //char	__VpadToAlign844[4];
    VL_SIGW(__Vtemp1621,95,0,3);
    //char	__VpadToAlign860[4];
    VL_SIGW(__Vtemp1622,95,0,3);
    //char	__VpadToAlign876[4];
    VL_SIGW(__Vtemp1625,95,0,3);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp1626,95,0,3);
    //char	__VpadToAlign908[4];
    VL_SIGW(__Vtemp1630,95,0,3);
    //char	__VpadToAlign924[4];
    VL_SIGW(__Vtemp1631,95,0,3);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp1633,95,0,3);
    //char	__VpadToAlign956[4];
    VL_SIGW(__Vtemp1634,95,0,3);
    //char	__VpadToAlign972[4];
    VL_SIGW(__Vtemp1635,95,0,3);
    //char	__VpadToAlign988[4];
    VL_SIGW(__Vtemp1636,95,0,3);
    //char	__VpadToAlign1004[4];
    VL_SIGW(__Vtemp1637,95,0,3);
    //char	__VpadToAlign1020[4];
    VL_SIGW(__Vtemp1639,95,0,3);
    //char	__VpadToAlign1036[4];
    VL_SIGW(__Vtemp1640,95,0,3);
    //char	__VpadToAlign1052[4];
    VL_SIGW(__Vtemp1643,95,0,3);
    //char	__VpadToAlign1068[4];
    VL_SIGW(__Vtemp1644,95,0,3);
    //char	__VpadToAlign1084[4];
    VL_SIGW(__Vtemp1647,95,0,3);
    //char	__VpadToAlign1100[4];
    VL_SIGW(__Vtemp1648,95,0,3);
    //char	__VpadToAlign1116[4];
    VL_SIGW(__Vtemp1651,95,0,3);
    //char	__VpadToAlign1132[4];
    VL_SIGW(__Vtemp1652,95,0,3);
    //char	__VpadToAlign1148[4];
    VL_SIGW(__Vtemp1655,95,0,3);
    //char	__VpadToAlign1164[4];
    VL_SIGW(__Vtemp1656,95,0,3);
    //char	__VpadToAlign1180[4];
    VL_SIGW(__Vtemp1659,95,0,3);
    //char	__VpadToAlign1196[4];
    VL_SIGW(__Vtemp1660,95,0,3);
    //char	__VpadToAlign1212[4];
    VL_SIGW(__Vtemp1663,95,0,3);
    //char	__VpadToAlign1228[4];
    VL_SIGW(__Vtemp1664,95,0,3);
    //char	__VpadToAlign1244[4];
    VL_SIGW(__Vtemp1667,95,0,3);
    //char	__VpadToAlign1260[4];
    VL_SIGW(__Vtemp1668,95,0,3);
    //char	__VpadToAlign1276[4];
    VL_SIGW(__Vtemp1671,95,0,3);
    //char	__VpadToAlign1292[4];
    VL_SIGW(__Vtemp1672,95,0,3);
    //char	__VpadToAlign1308[4];
    VL_SIGW(__Vtemp1674,95,0,3);
    //char	__VpadToAlign1324[4];
    VL_SIGW(__Vtemp1675,95,0,3);
    //char	__VpadToAlign1340[4];
    VL_SIGW(__Vtemp1677,95,0,3);
    //char	__VpadToAlign1356[4];
    VL_SIGW(__Vtemp1678,95,0,3);
    //char	__VpadToAlign1372[4];
    VL_SIGW(__Vtemp1681,95,0,3);
    //char	__VpadToAlign1388[4];
    VL_SIGW(__Vtemp1682,95,0,3);
    //char	__VpadToAlign1404[4];
    VL_SIGW(__Vtemp1685,95,0,3);
    //char	__VpadToAlign1420[4];
    VL_SIGW(__Vtemp1686,95,0,3);
    //char	__VpadToAlign1436[4];
    VL_SIGW(__Vtemp1689,95,0,3);
    //char	__VpadToAlign1452[4];
    VL_SIGW(__Vtemp1690,95,0,3);
    //char	__VpadToAlign1468[4];
    VL_SIGW(__Vtemp1693,95,0,3);
    //char	__VpadToAlign1484[4];
    VL_SIGW(__Vtemp1694,95,0,3);
    //char	__VpadToAlign1500[4];
    VL_SIGW(__Vtemp1697,95,0,3);
    //char	__VpadToAlign1516[4];
    VL_SIGW(__Vtemp1698,95,0,3);
    //char	__VpadToAlign1532[4];
    VL_SIGW(__Vtemp1701,95,0,3);
    //char	__VpadToAlign1548[4];
    VL_SIGW(__Vtemp1702,95,0,3);
    //char	__VpadToAlign1564[4];
    VL_SIGW(__Vtemp1705,95,0,3);
    //char	__VpadToAlign1580[4];
    VL_SIGW(__Vtemp1706,95,0,3);
    //char	__VpadToAlign1596[4];
    VL_SIGW(__Vtemp1709,95,0,3);
    //char	__VpadToAlign1612[4];
    VL_SIGW(__Vtemp1710,95,0,3);
    //char	__VpadToAlign1628[4];
    VL_SIGW(__Vtemp1713,95,0,3);
    //char	__VpadToAlign1644[4];
    VL_SIGW(__Vtemp1714,95,0,3);
    //char	__VpadToAlign1660[4];
    VL_SIGW(__Vtemp1717,95,0,3);
    //char	__VpadToAlign1676[4];
    VL_SIGW(__Vtemp1718,95,0,3);
    //char	__VpadToAlign1692[4];
    VL_SIGW(__Vtemp1721,95,0,3);
    //char	__VpadToAlign1708[4];
    VL_SIGW(__Vtemp1722,95,0,3);
    //char	__VpadToAlign1724[4];
    VL_SIGW(__Vtemp1733,95,0,3);
    //char	__VpadToAlign1740[4];
    VL_SIGW(__Vtemp1734,95,0,3);
    //char	__VpadToAlign1756[4];
    VL_SIGW(__Vtemp1740,191,0,6);
    VL_SIGW(__Vtemp1741,191,0,6);
    VL_SIGW(__Vtemp1744,95,0,3);
    //char	__VpadToAlign1820[4];
    VL_SIGW(__Vtemp1745,95,0,3);
    //char	__VpadToAlign1836[4];
    VL_SIGW(__Vtemp1748,95,0,3);
    //char	__VpadToAlign1852[4];
    VL_SIGW(__Vtemp1749,95,0,3);
    //char	__VpadToAlign1868[4];
    VL_SIGW(__Vtemp1752,127,0,4);
    VL_SIGW(__Vtemp1753,191,0,6);
    VL_SIGW(__Vtemp1754,191,0,6);
    VL_SIGW(__Vtemp1756,255,0,8);
    VL_SIGW(__Vtemp1757,255,0,8);
    VL_SIGW(__Vtemp1758,255,0,8);
    VL_SIGW(__Vtemp1759,255,0,8);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
	   & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
	      & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_io_deq_ready 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		  & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_201)) 
		     | (0U == (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode))
					  ? (~ (0xffffffU 
						& (((IData)(0xfffU) 
						    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
						   >> 3U)))
					  : 0U))))) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_last))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_303 
	= (0x1ffffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_241) 
		       + (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44)) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_418 
	= (0x1ffffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_356) 
		       + (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_689 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_665_0) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_resp));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_694 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_665_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_resp));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_b_bits_user)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1143));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_298 
	= ((0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
		    >> 0x14U)) | (0xf0U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
					   >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_255 
	= ((0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
		     >> 8U)) | (0xff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
					   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1010 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__waddr 
	= ((0x1cU > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_prediction_entry))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_prediction_entry)
	    : ((0x1eU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_432) 
			 << 1U)) | (0xfffffffU & ((0x1cU 
						   > 
						   (1U 
						    | (0x1eU 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_432) 
							  << 1U)))) 
						  & ((0xfffffffU 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
							 << 1U)) 
						     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_432))))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_110) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_110) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_107) 
					& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_107) 
						  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_104) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_104) 
			      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_101) 
					  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_101) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_131 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_96) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_94) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_96) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_94) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_93) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_91) 
					& vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_93) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_91) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_90) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_88) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_90) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_88) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_87) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_85) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_87) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_85) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_131 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_94) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_94) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_91) 
					& vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_91) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_90) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_88) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_90) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_88) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_87) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_85) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_87) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_85) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_131 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_96) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_94) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_96) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_94) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_93) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_91) 
					& vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_93) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_91) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_90) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_88) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_90) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_88) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_87) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_85) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_87) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_85) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1363)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1369)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1363)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1370)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1363)
	    ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_in_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1361))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1319 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1361)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1361))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1361)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1419 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1384) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1382) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1384) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1382) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1381) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1379) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1381) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1379) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1378) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1376) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1378) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1376) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1375) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1373) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1375) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1373) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1463 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1428) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1426) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1428) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1426) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1423) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1423) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1422) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1420) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1422) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1420) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1419) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1417) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1419) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1417) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id));
    VL_EXTEND_WQ(127,64, __Vtemp1549, (((QData)((IData)(
							vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    VL_SHIFTL_WWI(127,127,6, __Vtemp1550, __Vtemp1549, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_616));
    __Vtemp1551[0U] = __Vtemp1550[0U];
    __Vtemp1551[1U] = __Vtemp1550[1U];
    __Vtemp1551[2U] = __Vtemp1550[2U];
    __Vtemp1551[3U] = (0x7fffffffU & __Vtemp1550[3U]);
    VL_EXTEND_WW(129,127, __Vtemp1552, __Vtemp1551);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1552[0U] : ((0xfffffffeU & ((IData)(
							 (((QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
						 << 1U)) 
				 | (1U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1552[1U] : ((1U & ((IData)((((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(
									      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
							    >> 0x20U)) 
						   << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1552[2U] : ((1U & ((IData)(((((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
						 >> 0x20U)) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   ((1U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U])
							     ? 
							    (((QData)((IData)(
									      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))
							     : 
							    (((QData)((IData)(
									      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[0U]))))) 
						   << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[3U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1552[3U] : ((1U & ((IData)(((1U 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U])
						  ? 
						 (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))
						  : 
						 (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[0U]))))) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   (((1U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U])
							      ? 
							     (((QData)((IData)(
									       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))
							      : 
							     (((QData)((IData)(
									       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[0U])))) 
							    >> 0x20U)) 
						   << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[4U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1552[4U] : (1U & ((IData)((((1U 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U])
						  ? 
						 (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))
						  : 
						 (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[0U])))) 
						>> 0x20U)) 
				       >> 0x1fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_eret 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1964) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_65 
	= (VL_ULL(0x7fffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
				   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_52))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_30 
	= ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_16 
			    >> 0x20U))) | (VL_ULL(0xffffffff00000000) 
					   & ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_16)) 
					      << 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_30 
	= ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_16 
			    >> 0x20U))) | (VL_ULL(0xffffffff00000000) 
					   & ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_16)) 
					      << 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_818 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_815) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_815) 
				 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_875 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_872) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_872) 
				 << 2U))));
    __Vtemp1557[0U] = 0U;
    __Vtemp1557[1U] = 0U;
    __Vtemp1557[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1558, __Vtemp1557, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1561[0U] = 0U;
    __Vtemp1561[1U] = 0U;
    __Vtemp1561[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1562, __Vtemp1561, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1565[0U] = 0U;
    __Vtemp1565[1U] = 0U;
    __Vtemp1565[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1566, __Vtemp1565, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1569[0U] = 0U;
    __Vtemp1569[1U] = 0U;
    __Vtemp1569[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1570, __Vtemp1569, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1573[0U] = 0U;
    __Vtemp1573[1U] = 0U;
    __Vtemp1573[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1574, __Vtemp1573, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1577[0U] = 0U;
    __Vtemp1577[1U] = 0U;
    __Vtemp1577[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1578, __Vtemp1577, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1581[0U] = 0U;
    __Vtemp1581[1U] = 0U;
    __Vtemp1581[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1582, __Vtemp1581, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1585[0U] = 0U;
    __Vtemp1585[1U] = 0U;
    __Vtemp1585[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1586, __Vtemp1585, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1589[0U] = 0U;
    __Vtemp1589[1U] = 0U;
    __Vtemp1589[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1590, __Vtemp1589, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
	     ? 0U : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
		      ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
			  ? 0U : ((4U & (__Vtemp1558[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp1562[0U]) 
				   | (1U & (__Vtemp1566[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70) 
							  << 7U))) 
						   | ((0x20U 
						       & (__Vtemp1570[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp1574[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp1578[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp1582[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp1586[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp1590[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
		    >> 0x1aU)));
    __Vtemp1593[0U] = 0U;
    __Vtemp1593[1U] = 0U;
    __Vtemp1593[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1594, __Vtemp1593, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1597[0U] = 0U;
    __Vtemp1597[1U] = 0U;
    __Vtemp1597[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1598, __Vtemp1597, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1601[0U] = 0U;
    __Vtemp1601[1U] = 0U;
    __Vtemp1601[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1602, __Vtemp1601, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1605[0U] = 0U;
    __Vtemp1605[1U] = 0U;
    __Vtemp1605[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1606, __Vtemp1605, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1609[0U] = 0U;
    __Vtemp1609[1U] = 0U;
    __Vtemp1609[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1610, __Vtemp1609, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1613[0U] = 0U;
    __Vtemp1613[1U] = 0U;
    __Vtemp1613[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1614, __Vtemp1613, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1617[0U] = 0U;
    __Vtemp1617[1U] = 0U;
    __Vtemp1617[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1618, __Vtemp1617, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1621[0U] = 0U;
    __Vtemp1621[1U] = 0U;
    __Vtemp1621[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1622, __Vtemp1621, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1625[0U] = 0U;
    __Vtemp1625[1U] = 0U;
    __Vtemp1625[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1626, __Vtemp1625, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
		      ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
			  ? 0U : ((4U & (__Vtemp1594[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp1598[0U]) 
				   | (1U & (__Vtemp1602[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70) 
							  << 7U))) 
						   | ((0x20U 
						       & (__Vtemp1606[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp1610[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp1614[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp1618[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp1622[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp1626[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
		    >> 0x1aU)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_last)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0x33333333U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_131 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_96) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_94) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_96) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_94) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_93) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_91) 
					& vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_93) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_91) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_90) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_88) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_90) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_88) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_87) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_85) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_87) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_85) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_131 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_96) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_94) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_96) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_94) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_93) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_91) 
					& vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_93) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_91) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_90) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_88) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_90) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_88) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_87) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_85) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_87) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_85) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_37 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_637) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__wrong_path));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1090 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715)
	    ? ((8U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
	        ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_915) 
		     << 0x14U) | ((0xff000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data) 
				  | (0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					       >> 9U)))) 
		   | (0x7feU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				>> 0x14U))) : ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_915) 
						 << 0x14U) 
						| ((0xff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | (0x800U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							 << 4U)))) 
					       | ((0x7e0U 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						      >> 0x14U)) 
						  | (0x1eU 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							>> 7U)))))
	    : ((0xffe00000U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_809 
						       >> 0x14U)))) 
			       << 0x15U)) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_809));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719 
	= (1U & ((((IData)(3U) << (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc 
						 >> 1U)))) 
		  >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_repeat 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_source)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_380))
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_250)
				  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_401))) 
			     << 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	     ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_address
	     : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	   | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_388) 
				  << 3U) | (0x1fffU 
					    & ((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)))) 
				| (7U & (~ (0x3ffU 
					    & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
	= (0x1ffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
			 ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_address
			 : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		       | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_388) 
					      << 3U) 
					     | (0x1fffU 
						& ((IData)(0x3fU) 
						   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)))) 
					    | (7U & 
					       (~ (0x3ffU 
						   & ((IData)(7U) 
						      << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_source)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_380))
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_250)
				  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_401))) 
			     << 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_repeat 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address 
	= (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
		       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_address)
		       : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
		     | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_388) 
					    << 3U) 
					   | (0x1fffU 
					      & ((IData)(0x3fU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)))) 
					  | (7U & (~ 
						   (0x3ffU 
						    & ((IData)(7U) 
						       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_source 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_source)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_380))
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_250)
				  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_401))) 
			     << 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_repeat 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
	= (0x3ffffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
			   ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_address
			   : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			 | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_388) 
						<< 3U) 
					       | (0x1fffU 
						  & ((IData)(0x3fU) 
						     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)))) 
					      | (7U 
						 & (~ 
						    (0x3ffU 
						     & ((IData)(7U) 
							<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_source 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_source)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)) 
	    << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_380))
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_250)
				  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_401))) 
			     << 3U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_388)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_428 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_418) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_418) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_169 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_159) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_159) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_116 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_106 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_106 
				      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3825 
	= (((QData)((IData)((0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled)
					 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__partialPPN
					 : (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						    >> 0xcU))) 
				       >> 0x12U)))) 
	    << 0x1eU) | (QData)((IData)(((0x3fe00000U 
					  & ((((1U 
						> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__level))
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							   >> 0xcU))
					        : 0U) 
					      | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__partialPPN) 
					     << 0xcU)) 
					 | ((0x1ff000U 
					     & ((0xfffff000U 
						 & (((2U 
						      > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__level))
						      ? (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
								 >> 0xcU))
						      : 0U) 
						    << 0xcU)) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__partialPPN 
						   << 0xcU))) 
					    | (0xfffU 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3375 
	= (0xffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			       >> 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__tlb_miss 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__bad_va))) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits))) 
	   & (0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3465 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits) 
		 | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			    >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3476 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 2U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3492 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 4U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 5U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3503 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 6U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3524 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 8U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 9U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3535 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0xaU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					       >> 0xbU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3551 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0xcU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					       >> 0xdU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3562 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0xeU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					       >> 0xfU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3588 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x10U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x11U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3599 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x12U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x13U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3615 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x14U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x15U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3626 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x16U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x17U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3647 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x18U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x19U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3658 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x1aU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x1bU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3674 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x1cU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3689 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x1fU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						>> 0x20U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_342 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_339) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_339) 
				 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_319 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_317) 
	   | (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_317) 
		       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_330 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_327) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_327) 
				 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_119 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_84) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_82) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_84) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_82) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_81) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_79) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_81) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_79) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_78) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_76) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_78) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_76) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_75) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_73) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_75) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_73) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_119 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_84) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_82) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_84) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_82) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_81) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_79) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_81) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_79) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_78) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_76) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_78) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_76) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_75) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_73) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_75) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_73) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_119 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_84) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_82) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_84) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_82) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_81) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_79) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_81) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_79) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_78) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_76) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_78) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_76) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_75) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_73) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_75) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_73) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_119 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_84) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_82) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_84) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_82) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_81) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_79) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_81) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_79) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_78) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_76) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_78) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_76) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_75) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_73) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_75) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_73) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst 
	= ((1U & ((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
		  - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_ae_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3976 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1018) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1018) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_417 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_182 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_71 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_74 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_57 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_60 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_373 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_475)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_480)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_928 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_475)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_480)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_a_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_475)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_480));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_484 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_475)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_147 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_112) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_110) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_112) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_110) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_109) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_107) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_109) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_107) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_106) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_104) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_106) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_104) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_103) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_101) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_103) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_101) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1002));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_519 
	= ((0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
			     >> 0x28U))) | (0xff00U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							>> 0x20U)) 
					       << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_466 
	= ((0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
			       >> 0x10U))) | (0xffff0000U 
					      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
						 << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_593 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_509) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_585) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_585) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_585) 
							>> 1U)))));
    VL_EXTEND_WQ(66,63, __Vtemp1630, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1631, __Vtemp1630, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1633, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1631[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1631[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1631[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1634, __Vtemp1633, 0xcU);
    __Vtemp1635[0U] = __Vtemp1634[0U];
    __Vtemp1635[1U] = __Vtemp1634[1U];
    __Vtemp1635[2U] = (3U & __Vtemp1634[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1636, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						  << 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp1637, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmpHomogeneous 
	= (1U & (((((((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
			 ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
				 >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
					       >> 9U)
					    : ((1U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
						   >> 0x12U)
					        : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
						   >> 0x1bU)))) 
			    | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			        ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						 & (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[2U])) 
						     << 0x34U) 
						    | (((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[1U])) 
							<< 0x14U) 
						       | ((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[0U])) 
							  >> 0xcU)))))
			        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				    ? (VL_ULL(0) != 
				       (VL_ULL(0x3fffffffffffff) 
					& (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[2U])) 
					    << 0x34U) 
					   | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[1U])) 
					       << 0x14U) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[0U])) 
						 >> 0xcU)))))
				    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				        ? (VL_ULL(0) 
					   != (VL_ULL(0x1fffffffffff) 
					       & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[2U])) 
						   << 0x2bU) 
						  | (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[1U])) 
						      << 0xbU) 
						     | ((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[0U])) 
							>> 0x15U)))))
				        : (VL_ULL(0) 
					   != (VL_ULL(0xfffffffff) 
					       & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[2U])) 
						   << 0x22U) 
						  | (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[1U])) 
						      << 2U) 
						     | ((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[0U])) 
							>> 0x1eU)))))))))
			 : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)) 
			    | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1030)) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1060)))) 
		       & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
			   ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
				   >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
						 >> 9U)
					      : ((1U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
						  ? 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
						  >> 0x12U)
						  : 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
						  >> 0x1bU)))) 
			      | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				  ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						   & (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[2U])) 
						       << 0x34U) 
						      | (((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[1U])) 
							  << 0x14U) 
							 | ((QData)((IData)(
									    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[0U])) 
							    >> 0xcU)))))
				  : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				      ? (VL_ULL(0) 
					 != (VL_ULL(0x3fffffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[2U])) 
						 << 0x34U) 
						| (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[1U])) 
						    << 0x14U) 
						   | ((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[0U])) 
						      >> 0xcU)))))
				      : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					  ? (VL_ULL(0) 
					     != (VL_ULL(0x1fffffffffff) 
						 & (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[2U])) 
						     << 0x2bU) 
						    | (((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[1U])) 
							<< 0xbU) 
						       | ((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[0U])) 
							  >> 0x15U)))))
					  : (VL_ULL(0) 
					     != (VL_ULL(0xfffffffff) 
						 & (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[2U])) 
						     << 0x22U) 
						    | (((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[1U])) 
							<< 2U) 
						       | ((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[0U])) 
							  >> 0x1eU)))))))))
			   : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)) 
			      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1060) 
				  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1133))) 
				 | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1030)) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1163)))))) 
		      & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
			  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
				  >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
						>> 9U)
					     : ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
						 ? 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
						 >> 0x12U)
						 : 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
						 >> 0x1bU)))) 
			     | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				 ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						  & (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[2U])) 
						      << 0x34U) 
						     | (((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[1U])) 
							 << 0x14U) 
							| ((QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[0U])) 
							   >> 0xcU)))))
				 : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				     ? (VL_ULL(0) != 
					(VL_ULL(0x3fffffffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[2U])) 
					     << 0x34U) 
					    | (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[1U])) 
						<< 0x14U) 
					       | ((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[0U])) 
						  >> 0xcU)))))
				     : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					 ? (VL_ULL(0) 
					    != (VL_ULL(0x1fffffffffff) 
						& (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[2U])) 
						    << 0x2bU) 
						   | (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[1U])) 
						       << 0xbU) 
						      | ((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[0U])) 
							 >> 0x15U)))))
					 : (VL_ULL(0) 
					    != (VL_ULL(0xfffffffff) 
						& (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[2U])) 
						    << 0x22U) 
						   | (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[1U])) 
						       << 2U) 
						      | ((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[0U])) 
							 >> 0x1eU)))))))))
			  : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)) 
			     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1163) 
				 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1236))) 
				| ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1133)) 
				   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1266)))))) 
		     & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
			 ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
				 >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
					       >> 9U)
					    : ((1U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
						   >> 0x12U)
					        : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
						   >> 0x1bU)))) 
			    | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			        ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						 & (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[2U])) 
						     << 0x34U) 
						    | (((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[1U])) 
							<< 0x14U) 
						       | ((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[0U])) 
							  >> 0xcU)))))
			        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				    ? (VL_ULL(0) != 
				       (VL_ULL(0x3fffffffffffff) 
					& (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[2U])) 
					    << 0x34U) 
					   | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[1U])) 
					       << 0x14U) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[0U])) 
						 >> 0xcU)))))
				    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				        ? (VL_ULL(0) 
					   != (VL_ULL(0x1fffffffffff) 
					       & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[2U])) 
						   << 0x2bU) 
						  | (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[1U])) 
						      << 0xbU) 
						     | ((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[0U])) 
							>> 0x15U)))))
				        : (VL_ULL(0) 
					   != (VL_ULL(0xfffffffff) 
					       & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[2U])) 
						   << 0x22U) 
						  | (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[1U])) 
						      << 2U) 
						     | ((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[0U])) 
							>> 0x1eU)))))))))
			 : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)) 
			    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1266) 
				| (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1339))) 
			       | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1236)) 
				  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1369)))))) 
		    & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
		        ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
				>> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
					      >> 9U)
					   : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
						  >> 0x12U)
					       : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
						  >> 0x1bU)))) 
			   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			       ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						& (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[2U])) 
						    << 0x34U) 
						   | (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[1U])) 
						       << 0x14U) 
						      | ((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[0U])) 
							 >> 0xcU)))))
			       : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				   ? (VL_ULL(0) != 
				      (VL_ULL(0x3fffffffffffff) 
				       & (((QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[2U])) 
					   << 0x34U) 
					  | (((QData)((IData)(
							      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[1U])) 
					      << 0x14U) 
					     | ((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[0U])) 
						>> 0xcU)))))
				   : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				       ? (VL_ULL(0) 
					  != (VL_ULL(0x1fffffffffff) 
					      & (((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[2U])) 
						  << 0x2bU) 
						 | (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[1U])) 
						     << 0xbU) 
						    | ((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[0U])) 
						       >> 0x15U)))))
				       : (VL_ULL(0) 
					  != (VL_ULL(0xfffffffff) 
					      & (((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[2U])) 
						  << 0x22U) 
						 | (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[1U])) 
						     << 2U) 
						    | ((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[0U])) 
						       >> 0x1eU)))))))))
		        : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)) 
			   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1369) 
			       | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1442))) 
			      | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1339)) 
				 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1472)))))) 
		   & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
		       ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
			       >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
					     >> 9U)
					  : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
						 >> 0x12U)
					      : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
						 >> 0x1bU)))) 
			  | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			      ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
					       & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[2U])) 
						   << 0x34U) 
						  | (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[1U])) 
						      << 0x14U) 
						     | ((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[0U])) 
							>> 0xcU)))))
			      : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				  ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						   & (((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[2U])) 
						       << 0x34U) 
						      | (((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[1U])) 
							  << 0x14U) 
							 | ((QData)((IData)(
									    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[0U])) 
							    >> 0xcU)))))
				  : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				      ? (VL_ULL(0) 
					 != (VL_ULL(0x1fffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[2U])) 
						 << 0x2bU) 
						| (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[1U])) 
						    << 0xbU) 
						   | ((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[0U])) 
						      >> 0x15U)))))
				      : (VL_ULL(0) 
					 != (VL_ULL(0xfffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[2U])) 
						 << 0x22U) 
						| (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[1U])) 
						    << 2U) 
						   | ((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[0U])) 
						      >> 0x1eU)))))))))
		       : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)) 
			  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1472) 
			      | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1545))) 
			     | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1442)) 
				& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1575)))))) 
		  & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
		      ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
			      >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
					    >> 9U) : 
					((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
					     >> 0x12U)
					  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
					     >> 0x1bU)))) 
			 | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			     ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
					      & (((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[2U])) 
						  << 0x34U) 
						 | (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[1U])) 
						     << 0x14U) 
						    | ((QData)((IData)(
								       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[0U])) 
						       >> 0xcU)))))
			     : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				 ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						  & (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[2U])) 
						      << 0x34U) 
						     | (((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[1U])) 
							 << 0x14U) 
							| ((QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[0U])) 
							   >> 0xcU)))))
				 : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				     ? (VL_ULL(0) != 
					(VL_ULL(0x1fffffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[2U])) 
					     << 0x2bU) 
					    | (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[1U])) 
						<< 0xbU) 
					       | ((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[0U])) 
						  >> 0x15U)))))
				     : (VL_ULL(0) != 
					(VL_ULL(0xfffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[2U])) 
					     << 0x22U) 
					    | (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[1U])) 
						<< 2U) 
					       | ((QData)((IData)(
								  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[0U])) 
						  >> 0x1eU)))))))))
		      : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)) 
			 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1575) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1648))) 
			    | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1545)) 
			       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1678)))))) 
		 & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
		     ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
			     >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
					   >> 9U) : 
				       ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
					 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
					    >> 0x12U)
					 : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
					    >> 0x1bU)))) 
			| ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			    ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[2U])) 
						 << 0x34U) 
						| (((QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[1U])) 
						    << 0x14U) 
						   | ((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[0U])) 
						      >> 0xcU)))))
			    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
			        ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
						 & (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[2U])) 
						     << 0x34U) 
						    | (((QData)((IData)(
									vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[1U])) 
							<< 0x14U) 
						       | ((QData)((IData)(
									  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[0U])) 
							  >> 0xcU)))))
			        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
				    ? (VL_ULL(0) != 
				       (VL_ULL(0x1fffffffffff) 
					& (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[2U])) 
					    << 0x2bU) 
					   | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[1U])) 
					       << 0xbU) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[0U])) 
						 >> 0x15U)))))
				    : (VL_ULL(0) != 
				       (VL_ULL(0xfffffffff) 
					& (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[2U])) 
					    << 0x22U) 
					   | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[1U])) 
					       << 2U) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[0U])) 
						 >> 0x1eU)))))))))
		     : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)) 
			| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1678) 
			    | VL_GTE_W(3, __Vtemp1635, __Vtemp1636)) 
			   | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1648)) 
			      & VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1637)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & ((((VL_ULL(0) == (VL_ULL(0xc8000000) & 
			       (VL_ULL(0x8000000) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
		| (VL_ULL(0) == (VL_ULL(0xca010000) 
				 & (VL_ULL(0x2000000) 
				    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0xca012000) 
				& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
	      | (VL_ULL(0) == (VL_ULL(0xc0000000) & 
			       (VL_ULL(0x40000000) 
				^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1367 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1136) 
		  | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144) 
		     & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			< (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
					     << 2U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1429 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
					       << 2U)))))))
		  : (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144) 
			& (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
					       << 2U)))) 
				  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_204 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_54) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_379 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_554 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_729 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_904 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1254 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						    << 2U)))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969) 
			   & (0U != ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						  << 2U)))) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_142 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_54 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_86) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						 << 2U))))))))) 
		  & (((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
					      >> 3U))) 
		      < (0x1fffffffU & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
					       << 2U)) 
					   >> 3U)))) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_54) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_317 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_261) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_86) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_492 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_436) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_261) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_667 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_611) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_436) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_842 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_786) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_611) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_619) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1017 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_961) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_786) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_794) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1192 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969 
		       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
							   << 2U))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << 
								  (3U 
								   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1136) 
		      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144) 
			 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_98) 
			    < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						 << 2U))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_961) 
		     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_969) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						<< 2U)))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_272 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem_R0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___GEN_10 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_in_b_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_deq 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_257)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_deq 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_257)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_202 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_257)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT___T_20 
	= ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_1))
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_1));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT___T_20 
	= ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_1))
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_473) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___GEN_18 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_330 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_998 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_998 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___T_41 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_526 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_373)) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_472));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_445 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_473) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_476 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1009 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_940) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_954)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_940) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1102)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_380 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_370) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_370) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_121 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_111) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_111) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_68 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_58 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_58 
				      << 4U)));
    __Vtemp1639[0U] = 0U;
    __Vtemp1639[1U] = 0U;
    __Vtemp1639[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1640, __Vtemp1639, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1643[0U] = 0U;
    __Vtemp1643[1U] = 0U;
    __Vtemp1643[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1644, __Vtemp1643, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1647[0U] = 0U;
    __Vtemp1647[1U] = 0U;
    __Vtemp1647[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1648, __Vtemp1647, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1651[0U] = 0U;
    __Vtemp1651[1U] = 0U;
    __Vtemp1651[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1652, __Vtemp1651, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1655[0U] = 0U;
    __Vtemp1655[1U] = 0U;
    __Vtemp1655[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1656, __Vtemp1655, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1659[0U] = 0U;
    __Vtemp1659[1U] = 0U;
    __Vtemp1659[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1660, __Vtemp1659, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1663[0U] = 0U;
    __Vtemp1663[1U] = 0U;
    __Vtemp1663[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1664, __Vtemp1663, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1667[0U] = 0U;
    __Vtemp1667[1U] = 0U;
    __Vtemp1667[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1668, __Vtemp1667, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1671[0U] = 0U;
    __Vtemp1671[1U] = 0U;
    __Vtemp1671[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1672, __Vtemp1671, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
	= ((0x100U & ((IData)(0x100U) + (0x3fffU & 
					 VL_EXTENDS_II(14,13, 
						       (0xfffU 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							    << 0xcU) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							      >> 0x14U)))))))
	    ? 0U : ((0x80U & VL_EXTENDS_II(14,13, (0xfffU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
						       << 0xcU) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							 >> 0x14U)))))
		     ? ((0x40U & VL_EXTENDS_II(14,13, 
					       (0xfffU 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
						    << 0xcU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
						      >> 0x14U)))))
			 ? 0U : ((4U & (__Vtemp1640[0U] 
					<< 2U)) | (
						   (2U 
						    & __Vtemp1644[0U]) 
						   | (1U 
						      & (__Vtemp1648[0U] 
							 >> 2U)))))
		     : (7U | (0x1fffff8U & ((~ ((0x40U 
						 & VL_EXTENDS_II(14,13, 
								 (0xfffU 
								  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
								      << 0xcU) 
								     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
									>> 0x14U)))))
						 ? 
						(~ 
						 (((0x155540U 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_75) 
						       << 5U)) 
						   | (0x2aaa80U 
						      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_75) 
							 << 7U))) 
						  | ((0x20U 
						      & (__Vtemp1652[1U] 
							 >> 0x15U)) 
						     | ((0x10U 
							 & (__Vtemp1656[1U] 
							    >> 0x17U)) 
							| ((8U 
							    & (__Vtemp1660[1U] 
							       >> 0x19U)) 
							   | ((4U 
							       & (__Vtemp1664[1U] 
								  >> 0x1bU)) 
							      | ((2U 
								  & (__Vtemp1668[1U] 
								     >> 0x1dU)) 
								 | (1U 
								    & (__Vtemp1672[1U] 
								       >> 0x1fU)))))))))
						 : 0U)) 
					    << 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1348) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1360)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1348) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1468))) 
		       & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2509 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2439) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2454)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2509 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2439) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_2454)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2509 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2439) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2454)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2509 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2439) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_2454)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_2049 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1979) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor__DOT___T_1994)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0x33333333U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___GEN_13 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_out_r_ready 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_96));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559 
	= (((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_96)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__normalCase_S));
    __Vtemp1674[0U] = 0U;
    __Vtemp1674[1U] = 0U;
    __Vtemp1674[2U] = 0U;
    __Vtemp1675[0U] = 0U;
    __Vtemp1675[1U] = 0U;
    __Vtemp1675[2U] = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_60 
	= ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[1U] 
				       >> 0x1dU))))) 
	   | (((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
	       != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp_io_lt) 
		   | (VL_GTS_IWW(1,65,65, __Vtemp1674, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1) 
		      & VL_LTES_IWW(1,65,65, __Vtemp1675, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2)))) 
	      & (0U != (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
					    >> 0x1dU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248 
	= (VL_EXTENDS_QQ(64,63, (((QData)((IData)((0x3fU 
						   & VL_NEGATE_I((IData)(
									 (1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem 
										>> 0x38U)))))))) 
				  << 0x39U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem)) 
	   - VL_EXTENDS_QQ(64,63, (VL_ULL(0x3fffffffffffffff) 
				   & ((VL_ULL(0x7fffffffffffff) 
				       & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_214)
					      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_sig 
						 << 1U)
					      : VL_ULL(0)) 
					    | (((1U 
						 >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
						   & (~ 
						      (0xfffU 
						       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							   << 0xcU) 
							  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							     >> 0x14U))))))
					        ? VL_ULL(0x20000000000000)
					        : VL_ULL(0))) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_193)
					       ? VL_ULL(0x50000000000000)
					       : VL_ULL(0))) 
					  | (VL_ULL(0x3fffffffffffff) 
					     & (((1U 
						  < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z)))
						 ? 
						(VL_ULL(0x20000000000000) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
						    << 1U))
						 : VL_ULL(0))))) 
				      | (((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
					  ? ((VL_ULL(0xffffffffffffff) 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
						 << 1U)) 
					     | ((VL_ULL(1) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						>> 2U))
					  : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__normalCase_S 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
		  ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
		     & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				   >> 0x20U)))) : (
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
						   & (~ 
						      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isNaN) 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf)) 
						       | (0U 
							  == 
							  (7U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
								      >> 0x1dU)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem 
	= (0x7ffffffU & (((0x3ffffffU & (((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S)))
					  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
					     << 1U)
					  : 0U)) | 
			  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_193)
			    ? ((0x6000000U & (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
						>> 0x16U) 
					       - (IData)(1U)) 
					      << 0x19U)) 
			       | (0x1fffff8U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
						<< 3U)))
			    : 0U)) | ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
				       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
					  << 1U) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundIncr 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	      & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				       << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						  >> 0x1fU)) 
			& ((0U == (3U & (~ (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
						    >> 1U))))) 
			   | (0U == (3U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig))))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne) 
		    & (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig)))))) 
	     | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
		& ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					 << 1U)) | 
			   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
			    >> 0x1fU)) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
						  >> 1U)))) 
		   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne)))) 
	    | ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_inexact)))) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	      & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	      & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				       << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						  >> 0x1fU)) 
			& ((0U == (3U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U] 
					     << 0x1fU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U] 
					       >> 1U))))) 
			   | (0U == (3U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U])))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne) 
		    & (0U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U]))))) 
	     | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
		& ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					 << 1U)) | 
			   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
			    >> 0x1fU)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U] 
					  >> 1U))) 
		   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne)))) 
	    | ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact)))) 
	   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
	      & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1374 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2_io_in_d_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1312)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1464 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2_io_in_d_valid) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_2__DOT___T_1420))) 
	   & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1300 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__d_done 
	= (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_194))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_2_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_2_d_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3865 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3787))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsCached));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3878 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
	   & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___GEN_47 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter_io_out_0_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___GEN_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___T_223)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs1___05FT_63_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__req_addr);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___GEN_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_577)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs2___05FT_63_data
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__needle)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_577)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_rs1___05FT_63_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_233));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_valid 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_233));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1171 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__do_deq 
	= (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_41) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__do_deq 
	= (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_41) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__do_deq 
	= (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_41) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__do_deq 
	= (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 3U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_41) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__do_deq 
	= (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		     & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_41) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__do_deq 
	= (0x7ffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       >> 5U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		     & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_41) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_821 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_543)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_565 
	= (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_602 
	= (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_639 
	= (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_676 
	= (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
			>> 3U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_713 
	= (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_750 
	= (0x7ffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
		       >> 5U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_563)) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1347 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1278) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1292)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1278) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1440)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1347 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1278) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1292)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1278) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1440)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1347 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1278) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1292)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1278) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1440)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_928 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_928 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_0_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_3_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_2_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_1_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_513 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_510) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_510) 
				 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_490 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_488) 
	   | (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_488) 
		       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_501 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_498) 
		    | (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_498) 
				 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__req_arb_io_out_bits_tag 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq_io_replay_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_1_tag)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_0_tag))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__req_arb_io_out_bits_tag 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq_io_replay_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_1_tag)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_0_tag))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator_io_mem_req_valid 
	= ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__empty)) 
	     & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT___GEN_27))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__stallResp)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__do_deq 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_0) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_1)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_2)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__req_arb_io_out_bits_tag 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_1_tag)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_0_tag))
	    : (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_467 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
	   & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data)) 
	      | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_453 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
	   & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__do_deq 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_321)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__do_deq 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_321)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_266 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
	    & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_321)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3248 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1824)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1881)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3177 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1824) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1881));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3108 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1881) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1824));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3064 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1823)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1880)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2993 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1823) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1880));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2924 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1880) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1823));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2550 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1821)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1878)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2479 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1821) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1878));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2410 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1878) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1821));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2734 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1822)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1879)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2663 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1822) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1879));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2594 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1879) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1822));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_336 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem_R0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__in_ar_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
		     >> 0xaU) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				 >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_bits_resp)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
			>> 3U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				  >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))
		  : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1971 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1837 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
	    ? ((0x70U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
			 << 4U)) | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
	    : ((0x70U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
			 << 4U)) | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
		     >> 0xaU) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				 >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_bits_resp)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))
		  : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
			>> 3U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				  >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT___T_99 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_2));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter_io_chosen 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_1)
	    ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT__validMask_2)
		     ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__empty)
			      ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__empty)
				  ? 2U : 1U) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT___T_224 
	= ((((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__lastGrant)) 
	     | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT___T_100))) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state))) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_460 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_out_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
						     : 0U)))))))))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask))
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask))
	    : 0xffU);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4344 
	= (0xffffU & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
				     >> 1U))) ? (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4340 
							 >> 0x10U))
		       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4340)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2139 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		    : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2129 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		    : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2796 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2793 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_pre_xcpt) 
	   & (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
		      << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
				 << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
					    << 3U) 
					   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
					       << 2U) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
						  << 1U) 
						 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_297 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_292) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_292)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3847 
	= (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		  >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_last)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_95 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
	   | (0x18U >= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86)
			      : 0x4aU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_mask 
	= ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_741));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_95 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
	   | (0x35U >= (0x1fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86)
			      : 0xa1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_688 
	= (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316)
				   ? (VL_EXTENDS_QI(33,32, 
						    ((8U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325)
						      ? 
						     ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_516) 
							<< 0x14U) 
						       | ((0xff000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325) 
							  | (0x800U 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
								>> 9U)))) 
						      | (0x7feU 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
							    >> 0x14U)))
						      : 
						     ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_516) 
							<< 0x14U) 
						       | ((0xff000U 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
										>> 0x1fU)))) 
							      << 0xcU)) 
							  | (0x800U 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
								<< 4U)))) 
						      | ((0x7e0U 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
							     >> 0x14U)) 
							 | (0x1eU 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
							       >> 7U)))))) 
				      - VL_ULL(2)) : 
				  (((QData)((IData)(
						    (0xfffU 
						     & VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_410 
									       >> 0x14U))))))) 
				    << 0x15U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_410)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_621 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510)) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_347)) 
	      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_424))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_629 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_628));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_308 
	= (VL_ULL(0x1ffffffffff) & ((VL_ULL(0xffffffffff) 
				     & (~ (VL_ULL(3) 
					   | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc)))) 
				    + (QData)((IData)(
						      (7U 
						       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)
							    ? 1U
							    : 2U) 
							  << 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_ras_update_bits_cfiType 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)
	    ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316)
		 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_347)
		 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_424))
	        ? 3U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316)
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_350)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_432))
			 ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316)
					   ? (0x63U 
					      == (0x7fU 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325))
					   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_359))))))
	    : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715)
		 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_746)
		 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_823))
	        ? 3U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715)
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_749)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_831))
			 ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715)
					   ? (0x63U 
					      == (0x7fU 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))
					   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_758)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93 
	= ((0xffff0000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
				    >> 0x30U)) << 0x10U)) 
	   | (0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
				 >> 0x30U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__cacheable 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
						  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_73 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_61)) 
		  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		     < (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
				    << 2U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_409 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_349)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_121 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_109)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_61))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_169 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_157)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_109))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_217 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_205)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_157))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_265 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_205))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_313 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_301)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_361 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_349)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_301))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
	= (((QData)((IData)((0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)
					 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__partialPPN
					 : (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						    >> 0xcU))) 
				       >> 0x12U)))) 
	    << 0x1eU) | (QData)((IData)(((0x3fe00000U 
					  & ((((1U 
						> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__level))
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 0xcU))
					        : 0U) 
					      | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__partialPPN) 
					     << 0xcU)) 
					 | ((0x1ff000U 
					     & ((0xfffff000U 
						 & (((2U 
						      > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__level))
						      ? (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
								 >> 0xcU))
						      : 0U) 
						    << 0xcU)) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__partialPPN 
						   << 0xcU))) 
					    | (0xfffU 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__tlb_miss 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__bad_va))) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_imem_sfence_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3465 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits) 
		 | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			    >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3476 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 2U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3492 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 4U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 5U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3503 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 6U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3524 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 8U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 9U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3535 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0xaU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					       >> 0xbU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3551 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0xcU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					       >> 0xdU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3562 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0xeU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					       >> 0xfU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3588 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x10U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x11U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3599 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x12U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x13U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3615 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x14U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x15U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3626 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x16U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x17U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3647 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x18U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x19U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3658 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x1aU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x1bU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3674 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x1cU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3375 
	= (0xffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			       >> 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3689 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x1fU)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						>> 0x20U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_207 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_347 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageRepl 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__samePage)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH)
	    : ((0x3eU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH) 
			 << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH) 
					  >> 5U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_912 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_907) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_907)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1211 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1180) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1207));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1262 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1231) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1258));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1318 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1287) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1314));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1369 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1338) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1365));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s0_speculative 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_speculative) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__predicted_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_27 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__predicted_taken)
				    ? (((QData)((IData)(
							(1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_resp_bits_target 
								    >> 0x26U))))) 
					<< 0x27U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_resp_bits_target)
				    : (VL_ULL(4) + 
				       (~ (VL_ULL(3) 
					   | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2578 
	= (VL_ULL(0xffffffffff) & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr) 
				    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence))
				    ? (((QData)((IData)(
							(1U 
							 & (((0U 
							      == 
							      (0x1ffffffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1 
									  >> 0x27U)))) 
							     | (0x1ffffffU 
								== 
								(0x1ffffffU 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1 
									    >> 0x27U)))))
							     ? (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1 
									>> 0x27U))
							     : 
							    (~ (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1 
									>> 0x26U))))))) 
					<< 0x27U) | 
				       (VL_ULL(0x7fffffffff) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1))
				    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2560));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT___T_49 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT___GEN_14) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_io_deq_ready) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_308 
	= ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_298) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_298) 
					 << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_265 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_255) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_255) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1084 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1010) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1022)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1010) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1130))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__waddr)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_resp_bits_entry));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1357 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1319) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1331)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1238 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1222 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_15 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
	   & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
	      & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		 & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		    & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		       & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			  & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			     & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				& ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				   & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				      & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full))
					  : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full))
					      : ((3U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44))
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full))
						    : 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_63 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
	   & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
	      & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		 & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		    & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
		       & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			  & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			     & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				& ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				   & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
				      & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full))
					  : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full))
					      : ((3U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_44))
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_44))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full))
						    : 
						   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full)))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_67 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
		  ? (((VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1) 
		      >= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
		     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
		  : ((VL_ULL(0x7fffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1) 
					      | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_52)))) 
		     == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_65)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_134 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_35) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x)) 
	   & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
	       ? (((VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_pc) 
		   >= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
		  ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
	       : ((VL_ULL(0x7fffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_pc) 
					   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_52)))) 
		  == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_65)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_40 
	= ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_30 
				      >> 0x10U)) | 
	   (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_30 
					  << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_40 
	= ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_30 
				      >> 0x10U)) | 
	   (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_30 
					  << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_818) 
		    | (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_818) 
				 << 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_875) 
		    | (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_875) 
				 << 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	   & (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
		    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126 
	= ((~ (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
		     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
	   & (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
		    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126 
	= ((~ (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
		     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_561 
	= (0xffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_603 
	= (0x7fU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		      >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_645 
	= (0x3fU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		      >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_687 
	= (0x1fU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		      >> 3U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_729 
	= (0xfU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		     >> 4U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_771 
	= (7U & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537)) 
		   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_549)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_560)));
    __Vtemp1677[0U] = 0U;
    __Vtemp1677[1U] = 0U;
    __Vtemp1677[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1678, __Vtemp1677, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1681[0U] = 0U;
    __Vtemp1681[1U] = 0U;
    __Vtemp1681[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1682, __Vtemp1681, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1685[0U] = 0U;
    __Vtemp1685[1U] = 0U;
    __Vtemp1685[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1686, __Vtemp1685, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1689[0U] = 0U;
    __Vtemp1689[1U] = 0U;
    __Vtemp1689[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1690, __Vtemp1689, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1693[0U] = 0U;
    __Vtemp1693[1U] = 0U;
    __Vtemp1693[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1694, __Vtemp1693, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1697[0U] = 0U;
    __Vtemp1697[1U] = 0U;
    __Vtemp1697[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1698, __Vtemp1697, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
	= (((0x800U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
	     ? VL_ULL(0) : ((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
			     ? (QData)((IData)(((0x200U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						  ? 0U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp1678[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp1682[0U]) 
						       | (1U 
							  & (__Vtemp1686[0U] 
							     >> 2U))))))))))
			     : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					     & ((~ 
						 ((0x200U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						   ? 
						  ((0x100U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						    ? 
						   ((0x80U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
						      ? 
						     (~ 
						      (((QData)((IData)(
									((0x55555555U 
									  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
									     >> 1U)) 
									 | (0xaaaaaaaaU 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
									       << 1U))))) 
							<< 0x13U) 
						       | (QData)((IData)(
									 (((0x2aaa8U 
									    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132) 
									       << 2U)) 
									   | (0x55550U 
									      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132) 
										<< 4U))) 
									  | ((4U 
									      & (__Vtemp1690[1U] 
										>> 0x1bU)) 
									     | ((2U 
										& (__Vtemp1694[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp1698[1U] 
										>> 0x1fU)))))))))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))
						   : VL_ULL(0))) 
						<< 3U))))) 
	   | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
					    >> 0x37U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1118 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617))) 
	   & (3U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			   >> 0x10U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715) 
	    & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
	      & (0xa001U == (0xe003U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					>> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1020 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1510)) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_746)) 
	      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_823))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715) 
	    & (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_758)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1036 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_630) 
	     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719)) 
	   & (3U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			   >> 0x10U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1016 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715) 
	    & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
		| (0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	       | ((0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
	      & ((((0xa001U == (0xe003U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					   >> 0x10U))) 
		   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_831)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_817)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_758) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_24 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_out_0_a_valid)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_repeat));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_71 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_74 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_77 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_80 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_63 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_66 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_71 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_74 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_77 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_80 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_63 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_66 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_286 
	= (0x3fU & ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
			      << 3U)) | (7U & (~ (0x3fU 
						  & ((IData)(7U) 
						     << 
						     (3U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_71 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
		     >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_74 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
		     >> 2U)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_77 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
		  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_80 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
		  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_63 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_66 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_source) 
	    << 2U) | (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_71 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_74 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_77 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_80 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_63 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_66 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_source) 
	    << 2U) | (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458 
	= (((0x2aaa80U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_428) 
			  << 6U)) | (0x555500U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_428) 
						  << 8U))) 
	   | ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				 >> 0x10U)) << 6U)) 
	      | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				    >> 0x11U)) << 5U)) 
		 | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				       >> 0x12U)) << 4U)) 
		    | ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				       >> 0x13U)) << 3U)) 
		       | ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
					  >> 0x14U)) 
				 << 2U)) | ((2U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							    >> 0x15U)) 
						   << 1U)) 
					    | (1U & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							     >> 0x16U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_126 
	= ((0x33333333U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_116 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_116 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_611 
	= ((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U]) 
	   == (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3825 
				   >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_615 
	= ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
			 << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
				     >> 0x16U))) == 
	   (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3825 
				>> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_619 
	= ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
			 << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
				      >> 0xcU))) == 
	   (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3825 
				>> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_623 
	= ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
			>> 2U)) == (0xfffffU & (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3825 
							>> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3380 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3375) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3375)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3480 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3465) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3476));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3507 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3492) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3503));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3539 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3524) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3535));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3566 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3551) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3562));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3603 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3588) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3599));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3630 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3615) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3626));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3662 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3647) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3658));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3693 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
			  >> 0x1eU)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3689)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_349 
	= ((((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_319) 
			>> 1U) | (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_319) 
					>> 5U)))) | 
	     (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_330) 
		 | (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_330) 
			      << 4U))))) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_342) 
					       | (0xfffU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_342) 
						     << 4U))))) 
	   & ((((((((VL_ULL(0) == (VL_ULL(0xc8000000) 
				   & (QData)((IData)(
						     (0x8000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241))))) 
		    | (VL_ULL(0) == (VL_ULL(0xca010000) 
				     & (QData)((IData)(
						       (0x2000000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241)))))) 
		   | (VL_ULL(0) == (VL_ULL(0xca012000) 
				    & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241))))) 
		  | (VL_ULL(0) == (VL_ULL(0xca010000) 
				   & (QData)((IData)(
						     (0x10000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241)))))) 
		 | (VL_ULL(0) == (VL_ULL(0xc0000000) 
				  & (QData)((IData)(
						    (0x80000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241)))))) 
		| (VL_ULL(0) == (VL_ULL(0xc0000000) 
				 & (QData)((IData)(
						   (0x40000000U 
						    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241))))))
	        ? 7U : 0U) | ((VL_ULL(0) == (VL_ULL(0xca012000) 
					     & (QData)((IData)(
							       (0x2000U 
								^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241)))))
			       ? 0xffU : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_grow_param 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
	    ? 3U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
		     ? 2U : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
			      ? 1U : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
				       ? 3U : ((6U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
					        ? 2U
					        : (
						   (0xfU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
						    ? 3U
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
						     ? 3U
						     : 
						    ((0U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
						      ? 0U
						      : 
						     ((5U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
						       ? 2U
						       : 
						      ((4U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
						        ? 1U
						        : 
						       ((0xdU 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
							 ? 2U
							 : 
							((0xcU 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))
							  ? 1U
							  : 0U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
	   | ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
	      | ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
		 | ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
		    | ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
		       | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019)) 
			  | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1019))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_67 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_57) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_70 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_57) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_60) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_71))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_60) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_74))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_928) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_942)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_928) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1090)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_928 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_484) 
	    & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
		  >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_478));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_484) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_489)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_484) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_489));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1260 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0) 
	    & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1189 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1145 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004) 
	    << 1U) | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_529 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_519) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_519) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_476 
	= ((0xff00ffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_466 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_466 
						   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_605 
	= (0xffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_593))
		     ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462) 
				    << 1U)))) : (2U 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_462) 
						    << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2299 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae)
	    ? 0U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmpHomogeneous) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaHomogeneous))
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_waddr)
		     : 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae)
	    ? 0U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmpHomogeneous) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaHomogeneous))
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_waddr)
		     : 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array 
	= (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff)
			      ? 3U : 0U))) << 0x20U) 
	   | (QData)((IData)(((((((0x80000000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
							   >> 1U)) 
						  << 0x1fU)) 
				  | (0x40000000U & 
				     ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
					       >> 1U)) 
				      << 0x1eU))) | 
				 ((0x20000000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
							   >> 1U)) 
						  << 0x1dU)) 
				  | (0x10000000U & 
				     ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
					       >> 1U)) 
				      << 0x1cU)))) 
				| (((0x8000000U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
							    >> 1U)) 
						   << 0x1bU)) 
				    | (0x4000000U & 
				       ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
						 >> 1U)) 
					<< 0x1aU))) 
				   | ((0x2000000U & 
				       ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
						 >> 1U)) 
					<< 0x19U)) 
				      | (0x1000000U 
					 & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
						     >> 1U)) 
					    << 0x18U))))) 
			       | ((((0x800000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
							   >> 1U)) 
						  << 0x17U)) 
				    | (0x400000U & 
				       ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
						 >> 1U)) 
					<< 0x16U))) 
				   | ((0x200000U & 
				       ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
						 >> 1U)) 
					<< 0x15U)) 
				      | (0x100000U 
					 & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
						     >> 1U)) 
					    << 0x14U)))) 
				  | (((0x80000U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
							    >> 1U)) 
						   << 0x13U)) 
				      | (0x40000U & 
					 ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
						   >> 1U)) 
					  << 0x12U))) 
				     | ((0x20000U & 
					 ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
						   >> 1U)) 
					  << 0x11U)) 
					| (0x10000U 
					   & ((IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
						       >> 1U)) 
					      << 0x10U)))))) 
			      | (((((0x8000U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
							 >> 1U)) 
						<< 0xfU)) 
				    | (0x4000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
							   >> 1U)) 
						  << 0xeU))) 
				   | ((0x2000U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
							   >> 1U)) 
						  << 0xdU)) 
				      | (0x1000U & 
					 ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
						   >> 1U)) 
					  << 0xcU)))) 
				  | (((0x800U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
							  >> 1U)) 
						 << 0xbU)) 
				      | (0x400U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
							    >> 1U)) 
						   << 0xaU))) 
				     | ((0x200U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
							    >> 1U)) 
						   << 9U)) 
					| (0x100U & 
					   ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
						     >> 1U)) 
					    << 8U))))) 
				 | ((((0x80U & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
							 >> 1U)) 
						<< 7U)) 
				      | (0x40U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
							   >> 1U)) 
						  << 6U))) 
				     | ((0x20U & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
							   >> 1U)) 
						  << 5U)) 
					| (0x10U & 
					   ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
						     >> 1U)) 
					    << 4U)))) 
				    | (((8U & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
							>> 1U)) 
					       << 3U)) 
					| (4U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
							  >> 1U)) 
						 << 2U))) 
				       | ((2U & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
							  >> 1U)) 
						 << 1U)) 
					  | (1U & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
							   >> 1U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array 
	= (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable)
			      ? 3U : 0U))) << 0x20U) 
	   | (QData)((IData)(((((((0x80000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31) 
						  << 0x1fU)) 
				  | (0x40000000U & 
				     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30) 
				      << 0x1eU))) | 
				 ((0x20000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29) 
						  << 0x1dU)) 
				  | (0x10000000U & 
				     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28) 
				      << 0x1cU)))) 
				| (((0x8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27) 
						   << 0x1bU)) 
				    | (0x4000000U & 
				       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26) 
					<< 0x1aU))) 
				   | ((0x2000000U & 
				       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25) 
					<< 0x19U)) 
				      | (0x1000000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24) 
					    << 0x18U))))) 
			       | ((((0x800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23) 
						  << 0x17U)) 
				    | (0x400000U & 
				       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22) 
					<< 0x16U))) 
				   | ((0x200000U & 
				       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21) 
					<< 0x15U)) 
				      | (0x100000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20) 
					    << 0x14U)))) 
				  | (((0x80000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19) 
						   << 0x13U)) 
				      | (0x40000U & 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18) 
					  << 0x12U))) 
				     | ((0x20000U & 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17) 
					  << 0x11U)) 
					| (0x10000U 
					   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16) 
					      << 0x10U)))))) 
			      | (((((0x8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15) 
						<< 0xfU)) 
				    | (0x4000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14) 
						  << 0xeU))) 
				   | ((0x2000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13) 
						  << 0xdU)) 
				      | (0x1000U & 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12) 
					  << 0xcU)))) 
				  | (((0x800U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11) 
						 << 0xbU)) 
				      | (0x400U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10) 
						   << 0xaU))) 
				     | ((0x200U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9) 
						   << 9U)) 
					| (0x100U & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8) 
					    << 8U))))) 
				 | ((((0x80U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7) 
						<< 7U)) 
				      | (0x40U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6) 
						  << 6U))) 
				     | ((0x20U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5) 
						  << 5U)) 
					| (0x10U & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4) 
					    << 4U)))) 
				    | (((8U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3) 
					       << 3U)) 
					| (4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2) 
						 << 2U))) 
				       | ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1) 
						 << 1U)) 
					  | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_al 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1067)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_r 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1367)
	       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1429) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1370))
	       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1192)
		   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1254) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r)) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1195))
		   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1017)
		       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079) 
			   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r)) 
			  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1020))
		       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_842)
			   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_904) 
			       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r)) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_845))
			   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_667)
			       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_729) 
				   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r)) 
				  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_670))
			       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_492)
				   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_554) 
				       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r)) 
				      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_495))
				   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_317)
				       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_379) 
					   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r)) 
					  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_320))
				       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_142)
					   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_204) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r)) 
					      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_145))
					   : (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_w 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1067) 
		| (VL_ULL(0) == (VL_ULL(0xc0000000) 
				 & (VL_ULL(0x80000000) 
				    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0xc0000000) 
				& (VL_ULL(0x40000000) 
				   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1367)
	       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1429) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1370))
	       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1192)
		   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1254) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w)) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1195))
		   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1017)
		       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079) 
			   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w)) 
			  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1020))
		       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_842)
			   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_904) 
			       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w)) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_845))
			   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_667)
			       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_729) 
				   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w)) 
				  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_670))
			       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_492)
				   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_554) 
				       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w)) 
				      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_495))
				   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_317)
				       ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_379) 
					   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w)) 
					  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_320))
				       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_142)
					   ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_204) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w)) 
					      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_145))
					   : (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_202) 
	   & (0U == (0x1000U & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT___T_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT___T_20) 
	   >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_2));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT___T_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT___T_20) 
	   >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_2));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___T_41));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_4 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_330)
		      ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240) 
			 - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_239)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_3 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_330)
		       ? ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_burst))
			   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_addr)
			   : ((2U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_burst))
			       ? (0x7fffU & ((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_303 
					      & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_307 
						 >> 8U)) 
					     | (~ (
						   (0xfffU 
						    & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_addr))) 
						   | (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_307 
						      >> 8U)))))
			       : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_303))
		       : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_237)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1072 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_998) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1010)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_998) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1118))) 
	    & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		       ? 1U : 0U))) ? ((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1072 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_998) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1010)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_998) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1118))) 
	    & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		       ? 1U : 0U))) ? ((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_7 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1150 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_b_bits_user)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1143)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1143));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___GEN_18 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_445)
		      ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355) 
			 - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_354)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_8 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_445)
		       ? ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst))
			   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr)
			   : ((2U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst))
			       ? (0x7fffU & ((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_418 
					      & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_422 
						 >> 8U)) 
					     | (~ (
						   (0xfffU 
						    & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr))) 
						   | (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_422 
						      >> 8U)))))
			       : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_418))
		       : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_352)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_484 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479))
	    ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_476)
	        ? 1U : 0U) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_503 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_476));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410 
	= (((0x2aaa80U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_380) 
			  << 6U)) | (0x555500U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_380) 
						  << 8U))) 
	   | ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				 >> 0x10U)) << 6U)) 
	      | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				    >> 0x11U)) << 5U)) 
		 | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				       >> 0x12U)) << 4U)) 
		    | ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				       >> 0x13U)) << 3U)) 
		       | ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
					  >> 0x14U)) 
				 << 2U)) | ((2U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							    >> 0x15U)) 
						   << 1U)) 
					    | (1U & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							     >> 0x16U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_78 
	= ((0x33333333U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_68 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_68 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_135 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	   & (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
		    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_131 
	= ((~ (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
		     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
				       << 2U)));
    __Vtemp1701[0U] = 0U;
    __Vtemp1701[1U] = 0U;
    __Vtemp1701[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1702, __Vtemp1701, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1705[0U] = 0U;
    __Vtemp1705[1U] = 0U;
    __Vtemp1705[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1706, __Vtemp1705, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1709[0U] = 0U;
    __Vtemp1709[1U] = 0U;
    __Vtemp1709[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1710, __Vtemp1709, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1713[0U] = 0U;
    __Vtemp1713[1U] = 0U;
    __Vtemp1713[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1714, __Vtemp1713, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1717[0U] = 0U;
    __Vtemp1717[1U] = 0U;
    __Vtemp1717[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1718, __Vtemp1717, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1721[0U] = 0U;
    __Vtemp1721[1U] = 0U;
    __Vtemp1721[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1722, __Vtemp1721, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
	= (((0x800U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
	     ? VL_ULL(0) : ((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
			     ? (QData)((IData)(((0x200U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						  ? 0U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp1702[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp1706[0U]) 
						       | (1U 
							  & (__Vtemp1710[0U] 
							     >> 2U))))))))))
			     : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					     & ((~ 
						 ((0x200U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						   ? 
						  ((0x100U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						    ? 
						   ((0x80U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sExp))
						      ? 
						     (~ 
						      (((QData)((IData)(
									((0x55555555U 
									  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
									     >> 1U)) 
									 | (0xaaaaaaaaU 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
									       << 1U))))) 
							<< 0x13U) 
						       | (QData)((IData)(
									 (((0x2aaa8U 
									    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132) 
									       << 2U)) 
									   | (0x55550U 
									      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132) 
										<< 4U))) 
									  | ((4U 
									      & (__Vtemp1714[1U] 
										>> 0x1bU)) 
									     | ((2U 
										& (__Vtemp1718[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp1722[1U] 
										>> 0x1fU)))))))))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))
						   : VL_ULL(0))) 
						<< 3U))))) 
	   | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sig 
					    >> 0x37U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_out_r_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_976 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_out_r_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_561 
	= (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_598 
	= (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			>> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_635 
	= (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			>> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_672 
	= (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			>> 3U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_709 
	= (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_746 
	= (0x7ffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		       >> 5U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_559)) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_178 
	= (0x3fU & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__normalCase_S))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
			  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
			      ? ((1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					 << 0xcU) | 
					(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					 >> 0x14U)))
				  ? 0x35U : 0x36U) : 0x37U)
			  : 0U)) | (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
				     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__skipCycle2)))
				     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
					- (IData)(1U))
				     : 0U)) | ((0U 
						!= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_98)
	    ? ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
				 << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
					   >> 0x1dU)))))
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[0U])
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_60)
			     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[0U]
			     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[0U]))
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_98)
	    ? ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
				 << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
					   >> 0x1dU)))))
	        ? 0xe0080000U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U])
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		    ? 0xe0080000U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_60)
				      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U]
				      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[1U]))
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_98)
	    ? ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
				 << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
					   >> 0x1dU)))))
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U])
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_60)
			     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U]
			     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U]))
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___GEN_10 
	= (VL_ULL(0x7fffffffffffffff) & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
					  | (2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))
					  ? (VL_LTES_IQQ(1,63,63, VL_ULL(0), 
							 (VL_ULL(0x7fffffffffffffff) 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248
					      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem)
					  : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rem_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_259 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
	   | ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	      & VL_LTES_IQQ(1,63,63, VL_ULL(0), (VL_ULL(0x7fffffffffffffff) 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__normalCase_S));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248 
	= (VL_EXTENDS_II(32,31, ((0x70000000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem 
									 >> 0x1bU)))) 
						 << 0x1cU)) 
				 | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem)) 
	   - VL_EXTENDS_II(32,31, (0x3fffffffU & ((0x3ffffffU 
						   & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_214)
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_sig 
							  << 1U)
							  : 0U) 
							| (((1U 
							     >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
							    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
							       & (~ 
								  (0x1ffU 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
									      >> 0x17U))))))
							    ? 0x1000000U
							    : 0U)) 
						       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_193)
							   ? 0x2800000U
							   : 0U)) 
						      | (0x1ffffffU 
							 & (((1U 
							      < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
							     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z)))
							     ? 
							    (0x1000000U 
							     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
								<< 1U))
							     : 0U)))) 
						  | (((1U 
						       < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
						      ? 
						     ((0x7ffffffU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
							  << 1U)) 
						      | (((IData)(1U) 
							  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
							 >> 2U))
						      : 0U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundCarryBut2 
	= ((0U == (0x3fffffffU & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
					     >> 2U))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundIncr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundCarryBut2 
	= ((VL_ULL(0) == (VL_ULL(0x3fffffffffffffff) 
			  & (~ (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U])) 
				 << 0x3eU) | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U])) 
					       << 0x1eU) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U])) 
						 >> 2U)))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1374 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1300) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1312)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1464 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1300) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1420))) 
	   & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_wmode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__d_done));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_wmode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_wmode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__d_done));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__dataArb_io_in_1_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4015)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3878))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3878));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___GEN_16 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state))
	    ? ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__recv_beat))
	        ? (VL_ULL(0xffffffffc0) & ((VL_ULL(1) 
					    + (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__addr 
					       >> 6U)) 
					   << 6U)) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___GEN_0)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___GEN_0);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___GEN_15 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2402 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2510 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4049 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__releaseRejected 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_deq 
	= (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1171) 
		       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			  >> 2U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_deq 
	= (0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1171) 
		       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			  >> 3U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_750 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_aw_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_w_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1534 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1425) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1534 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1425) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1534 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_928) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_942)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_928) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1090)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_928) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_942)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_928) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1090)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT___GEN_11 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_520 
	= ((((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_490) 
			>> 1U) | (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_490) 
					>> 5U)))) | 
	     (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_501) 
		 | (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_501) 
			      << 4U))))) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_513) 
					       | (0xfffU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_513) 
						     << 4U))))) 
	   & ((((VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								    (0x40000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418)))))
		 ? 0x1fU : 0U) | (((((VL_ULL(0) == 
				      (VL_ULL(0xc8000000) 
				       & (QData)((IData)(
							 (0x8000000U 
							  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418))))) 
				     | (VL_ULL(0) == 
					(VL_ULL(0xca000000) 
					 & (QData)((IData)(
							   (0x2000000U 
							    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418)))))) 
				    | (VL_ULL(0) == 
				       (VL_ULL(0xca002000) 
					& (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418))))) 
				   | (VL_ULL(0) == 
				      (VL_ULL(0xc0000000) 
				       & (QData)((IData)(
							 (0x80000000U 
							  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418))))))
				   ? 7U : 0U)) | ((VL_ULL(0) 
						   == 
						   (VL_ULL(0xca002000) 
						    & (QData)((IData)(
								      (0x2000U 
								       ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418)))))
						   ? 0xffU
						   : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1018 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_947_0) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_467)) 
	      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_947_1) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_valid))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_947_2) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_valid))) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_947_3) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_valid))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_947_4) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_887 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_467) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_valid)) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_valid)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_valid)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_801 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_valid) 
	    << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_valid) 
		       << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_valid) 
				  << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_valid) 
					     << 1U) 
					    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_467)))));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_266) 
	   & (0U == (0x10000000U & vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3192 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104) 
		     - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)) 
			& ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3177)
			    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3248)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3177)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3248));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3121 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3108) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3118))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3108));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3008 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920) 
		     - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44)) 
			& ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2993)
			    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3064)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2993)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3064));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2937 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2924) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2934))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2924));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2479)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2550));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2423 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2410) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2420))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2410));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2663)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2734));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2607 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2594) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2604))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2594));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_342 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		   ? 1U : 0U) | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
				    >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___GEN_0 
	= ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))
	    ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
		       ? 1U : 0U)) ? 5U : 6U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
						  ? 1U
						  : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_293 
	= (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_idle)) 
	      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__source) 
		 == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
	     << 3U) | (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_idle)) 
			& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__source) 
			   == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
		       << 2U)) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_idle)) 
				    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__source) 
				       == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
				   << 1U) | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_idle)) 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__source) 
						== 
						(0x1fU 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
	   & (1U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
			   >> 5U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT___T_100 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter__DOT___T_99) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter_io_out_valid 
	= (1U & ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter_io_chosen))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__empty))
		  : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RRArbiter_io_chosen))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__empty))
		      : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___GEN_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_460)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_sptbr_ppn
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_ppn);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4360 
	= ((VL_ULL(0xffffffffffff0000) & (((1U == (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
					    ? ((1U 
						& ((~ 
						    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ) 
						     >> 2U)) 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4344) 
						      >> 0xfU)))
					        ? VL_ULL(0xffffffffffff)
					        : VL_ULL(0))
					    : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4340 
					       >> 0x10U)) 
					  << 0x10U)) 
	   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4344)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2139
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2139
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2140);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2129
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2130);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2129
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2130);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2807 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2781)
	    ? 6U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2784)
		     ? 4U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2787)
			      ? 0xfU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2790)
					 ? 0xdU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2793)
						    ? 7U
						    : 5U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2802 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_xcpt) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2781)) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2784)) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2787)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2790)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2793));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_masked 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_763));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_mem_busy 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid)) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__cached_grant_wait)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_req_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_305 
	= (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_292) 
			  >> 4U))) << 2U) | (((0U != 
					       (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_297) 
						   >> 2U))) 
					      << 1U) 
					     | (1U 
						& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_297) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_297) 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_170 
	= ((((((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
			     >> 0x16U))) << 6U) | (
						   (0U 
						    != 
						    (0xfU 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							>> 0x12U))) 
						   << 5U)) 
	     | (((0U != (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
				 >> 0xeU))) << 4U) 
		| ((0U != (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
				   >> 0xaU))) << 3U))) 
	    | (((0U != (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
				>> 6U))) << 2U) | (
						   ((0U 
						     != 
						     (0xfU 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							 >> 2U))) 
						    << 1U) 
						   | (0U 
						      != 
						      (0xfU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							  << 2U)))))) 
	   & ((0x20U & ((IData)((VL_ULL(0x7ffff) & 
				 (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						 (0x1fU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						     >> 2U))) 
				  >> 0xeU))) << 5U)) 
	      | ((0x10U & ((IData)((VL_ULL(0x3ffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							  >> 2U))) 
				       >> 0xfU))) << 4U)) 
		 | ((8U & ((IData)((VL_ULL(0x1ffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							  >> 2U))) 
				       >> 0x10U))) 
			   << 3U)) | ((4U & ((IData)(
						     (VL_ULL(0xffff) 
						      & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									(0x1fU 
									 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									    >> 2U))) 
							 >> 0x11U))) 
					     << 2U)) 
				      | ((2U & ((IData)(
							(VL_ULL(0x7fff) 
							 & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									   (0x1fU 
									    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									       >> 2U))) 
							    >> 0x12U))) 
						<< 1U)) 
					 | (1U & (IData)(
							 (VL_ULL(0x3fff) 
							  & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									    (0x1fU 
									     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
										>> 2U))) 
							     >> 0x13U))))))))));
    __Vtemp1733[0U] = (IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
			        ? VL_ULL(0x1fffffffffffff)
			        : VL_ULL(0)));
    __Vtemp1733[1U] = ((0xffe00000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
					 ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
					 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
				       << 0x15U)) | (IData)(
							    (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
							       ? VL_ULL(0x1fffffffffffff)
							       : VL_ULL(0)) 
							     >> 0x20U)));
    __Vtemp1733[2U] = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
				    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
				    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
				  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp1734, __Vtemp1733, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp1734[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp1734[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x3fffU & __Vtemp1734[2U]);
    __Vtemp1740[0U] = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
		        ? 0xffffffffU : 0U);
    __Vtemp1740[1U] = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
		        ? 0xffffffffU : 0U);
    __Vtemp1740[2U] = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
		        ? 0xffffffffU : 0U);
    __Vtemp1740[3U] = ((0xffff8000U & ((IData)((VL_ULL(0x3fffffffffffff) 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
						    ? 
						   (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
						    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
				       << 0xfU)) | 
		       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
			 ? 0x7fffU : 0U));
    __Vtemp1740[4U] = ((0x7fffU & ((IData)((VL_ULL(0x3fffffffffffff) 
					    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
					        ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
					        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
				   >> 0x11U)) | (0xffff8000U 
						 & ((IData)(
							    ((VL_ULL(0x3fffffffffffff) 
							      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
								  ? 
								 (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
								  : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
							     >> 0x20U)) 
						    << 0xfU)));
    __Vtemp1740[5U] = (0x7fffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
					    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
					        ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
					        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
					   >> 0x20U)) 
				  >> 0x11U));
    VL_SHIFTRS_WWI(165,165,8, __Vtemp1741, __Vtemp1740, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp1741[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp1741[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= __Vtemp1741[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
	= __Vtemp1741[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
	= __Vtemp1741[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
	= (0x1fU & __Vtemp1741[5U]);
    __Vtemp1744[0U] = 0U;
    __Vtemp1744[1U] = 0U;
    __Vtemp1744[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1745, __Vtemp1744, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    __Vtemp1748[0U] = 0U;
    __Vtemp1748[1U] = 0U;
    __Vtemp1748[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1749, __Vtemp1748, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_201 
	= ((0xfU & ((__Vtemp1745[1U] << 4U) | (__Vtemp1745[0U] 
					       >> 0x1cU))) 
	   | (0xf0U & ((__Vtemp1749[1U] << 0xcU) | 
		       (0xff0U & (__Vtemp1749[0U] >> 0x14U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_42 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_621)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_707 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid)) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_629) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_624)) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_621)));
    __Vtemp1752[0U] = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91);
    __Vtemp1752[1U] = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
			       >> 0x20U));
    __Vtemp1752[2U] = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93)) 
				<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93))));
    __Vtemp1752[3U] = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93)) 
				 << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93))) 
			       >> 0x20U));
    VL_EXTEND_WW(191,128, __Vtemp1753, __Vtemp1752);
    VL_SHIFTL_WWI(191,191,6, __Vtemp1754, __Vtemp1753, 
		  (0x30U & ((((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
			     - (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
					      >> 1U)))) 
			    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_102 
	= (__Vtemp1754[2U] & (IData)((VL_ULL(0x7fffffffffffffff) 
				      & (VL_ULL(0xffffffff) 
					 << (0x1fU 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
						<< 4U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_al 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1067)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__cacheable));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_x 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	    & (((VL_ULL(0) == (VL_ULL(0xca000000) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
		| (VL_ULL(0) == (VL_ULL(0xc0000000) 
				 & (VL_ULL(0x80000000) 
				    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0xc0000000) 
				& (VL_ULL(0x40000000) 
				   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_409)
	       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_412))
	       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_361)
		   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_364))
		   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_313)
		       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
			  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_316))
		       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_265)
			   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_268))
			   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_217)
			       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
				  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_220))
			       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_169)
				   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
				      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_172))
				   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_121)
				       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
					  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_124))
				       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_73)
					   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
					      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_76))
					   : (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)))))))))));
    VL_SHIFTR_WWI(256,256,7, __Vtemp1756, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array, 
		  (0x3fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
				    >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0 
	= (__Vtemp1756[0U] & ((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U]) 
			      == (0xfffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
						      >> 0xcU)))));
    VL_SHIFTR_WWI(256,256,7, __Vtemp1757, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array, 
		  (0x40U | (0x3fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
					     >> 6U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1 
	= (__Vtemp1757[0U] & ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
					    << 0xbU) 
					   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
					      >> 0x15U))) 
			      == (0xfffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
						      >> 0xcU)))));
    VL_SHIFTR_WWI(256,256,8, __Vtemp1758, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array, 
		  (0x80U | (0x3fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
					     >> 6U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2 
	= (__Vtemp1758[0U] & ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
					    << 0x16U) 
					   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
					      >> 0xaU))) 
			      == (0xfffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
						      >> 0xcU)))));
    VL_SHIFTR_WWI(256,256,8, __Vtemp1759, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array, 
		  (0xc0U | (0x3fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
					     >> 6U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3 
	= (__Vtemp1759[0U] & ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
					    << 1U) 
					   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
					      >> 0x1fU))) 
			      == (0xfffffU & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3825 
						      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3480 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3465) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3476));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3507 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3492) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3503));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3539 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3524) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3535));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3566 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3551) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3562));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3603 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3588) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3599));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3630 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3615) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3626));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3662 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3647) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3658));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3380 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3375) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3375)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3693 
	= (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
			  >> 0x1eU)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3689)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_113 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_182 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_119 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_140 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_161 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_93) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_677 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_207) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_629))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_624))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_621)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_300 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_207) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__wrong_path)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_207))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_216));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdate 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdateOH) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_347) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_347) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_347) 
							>> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_367 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit) 
	   | ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit))
	       ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageRepl)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageReplEn 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__doTgtPageRepl)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageRepl)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_resp_bits_entry 
	= (((0U != (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			      >> 0x10U))) << 4U) | 
	   (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_902) 
			      >> 8U))) << 3U) | (((0U 
						   != 
						   (0xfU 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_907) 
						       >> 4U))) 
						  << 2U) 
						 | (((0U 
						      != 
						      (3U 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_912) 
							  >> 2U))) 
						     << 1U) 
						    | (1U 
						       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_912) 
							   >> 3U) 
							  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_912) 
							     >> 1U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_43 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_27
				    : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
					& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_629) 
					   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_624)))
				        ? ((VL_ULL(0x1ffffffffff) 
					    & VL_EXTENDS_QQ(41,40, 
							    (VL_ULL(0xffffffffff) 
							     & (~ 
								(VL_ULL(3) 
								 | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc)))))) 
					   + (VL_ULL(0x1ffffffffff) 
					      & VL_EXTENDS_QQ(41,40, 
							      (((QData)((IData)(
										(0x7fU 
										& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_688 
										>> 0x20U)))))))) 
								<< 0x21U) 
							       | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_688))))
				        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_27)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_npc_misaligned 
	= (1U & (((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
			      >> 2U))) & (IData)((VL_ULL(0x7fffffffff) 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2578 
						     >> 1U)))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2582 
	= ((VL_ULL(0xfffffffffe) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2578) 
	   != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_pc);
}
