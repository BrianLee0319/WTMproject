// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__57(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__57\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_26));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allresumeack 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1254 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1180) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1192)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_35 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q) 
		 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1179 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1110) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1124)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___GEN_15 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1110) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1272)))
		  ? ((IData)(1U) << (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						   >> 0x2eU))))
		  : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_26));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8155) 
	   & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				   >> 0x34U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8155) 
	   & (4U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				   >> 0x34U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
	= (((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie))
	    ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts) 
		  | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
	= (((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
	    | ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie)))
	    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts 
	       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg)
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1243)
	      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_rdata
	      : VL_ULL(0)) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2) 
	   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_35));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1356 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1257) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___GEN_15)) 
		 & (~ (3U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1180) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1300))) 
			      & (6U != (4U == (7U & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x34U))))))
			      ? ((IData)(1U) << (1U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3107) 
						    >> 2U)))
			      : 0U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7893 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7901 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7989 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x10U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7997 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x11U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8005 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x12U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8013 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x13U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8021 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x14U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8029 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x15U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8037 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x16U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8045 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x17U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x18U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8061 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x19U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8069 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1aU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8077 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1bU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8085 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1cU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8093 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1dU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1eU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8109 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7856) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1fU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
		>> 6U)) & (0x10U == (0x50U & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x27U))))) 
	   & (0U == (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEnMaybe 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
		>> 8U)) & (0x10U == (0x50U & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x27U))))) 
	   & (0U == (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
		>> 7U)) & (0x10U == (0x50U & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x27U))))) 
	   & (0U == (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8195 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8203 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8291 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x10U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8299 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x11U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8307 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x12U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8315 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x13U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8323 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x14U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8331 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x15U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8339 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x16U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8347 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x17U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8355 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x18U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x19U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8371 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1aU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8379 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1bU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8387 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1cU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8395 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1dU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8403 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1eU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8411 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8158) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7173)) 
	       >> 0x1fU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_interrupt 
	= (1U & (((((((((((((((((((((((((((((((((((
						   ((((((1U 
							 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0)) 
							| (2U 
							   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							      << 1U))) 
						       | (4U 
							  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							     << 2U))) 
						      | (8U 
							 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							    << 3U))) 
						     | (0x800U 
							& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							   << 0xbU))) 
						    | (0x80U 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							  << 7U))) 
						   | (0x20U 
						      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							 << 5U))) 
						  | (0x2000U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
							<< 0xdU))) 
						 | (0x200U 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
						       << 9U))) 
						| (0x40U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
						      << 6U))) 
					       | (0x7fffU 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
						     << 0xeU))) 
					      | (0x400U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0) 
						    << 0xaU))) 
					     | (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
							>> 0xfU))) 
					    | (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						       >> 0xeU))) 
					   | (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						      >> 0xdU))) 
					  | (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						     >> 0xcU))) 
					 | (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						    >> 0xbU))) 
					| (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						   >> 3U))) 
				       | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						  >> 7U))) 
				      | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						 >> 9U))) 
				     | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
						>> 1U))) 
				    | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
					       >> 5U))) 
				   | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
					      >> 8U))) 
				  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts)) 
				 | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
					    >> 4U))) 
				| (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
					   >> 0xfU))) 
			       | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
					  >> 0xeU))) 
			      | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
					 >> 0xdU))) 
			     | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
					>> 0xcU))) 
			    | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
				       >> 0xbU))) | (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
							     >> 3U))) 
			  | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
				     >> 7U))) | (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
							 >> 9U))) 
			| (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
				   >> 1U))) | (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
						       >> 5U))) 
		      | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
				 >> 8U))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts)) 
		    | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
			       >> 4U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_singleStep))) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4966 
	= ((VL_ULL(0x80102d) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata) 
				   | (QData)((IData)(
						     (8U 
						      & ((~ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
								     >> 5U))) 
							 << 3U))))))) 
	   | (VL_ULL(0xffffffffff7fefd2) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5211 
	= ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
		    >> 0x3bU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5164 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
	    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg)) 
	   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
	      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_362 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)((0x7fU & ((IData)(1U) 
					    + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290))))))
	    : (QData)((IData)((0x7fU & ((IData)(1U) 
					+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_290))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_367 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((3U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) ? (VL_ULL(0x7ffffffffffffff) 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
						   >> 5U))
	        : ((2U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
		    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm))))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_384 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((0x106U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? 
	       (VL_ULL(7) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata)
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_scounteren)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_scounteren)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_385 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((0x306U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? 
	       (VL_ULL(7) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata)
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcounteren)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcounteren)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_467 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b6U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5383))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_474 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b7U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5383))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_425 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_432 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_439 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b2U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_446 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b3U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_453 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b4U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? (((0x3b5U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U))) & 
		(~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
		       & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
			      >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5035 
	= (VL_ULL(2) | ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata) 
			| (QData)((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata))
					    ? 0x3cU
					    : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__60(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__60\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1870,319,0,10);
    VL_SIGW(__Vtemp1871,319,0,10);
    VL_SIGW(__Vtemp1872,319,0,10);
    VL_SIGW(__Vtemp1873,319,0,10);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_480 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_131)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_723 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_131)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_480 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_131)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_723 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_131)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_480 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_131)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_723 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_131)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1308 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1277)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1283 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1267)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1490 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1419)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1595 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1419)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1562 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1463)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1667 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1463)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_480 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_131)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_723 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_131)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_480 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_131)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_723 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_131)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_529 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_686 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_535 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_535 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_790 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_767)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    VL_SHIFTR_WWI(320,320,9, __Vtemp1870, vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_950 
	= (1U & ((~ __Vtemp1870[0U]) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_154 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_795 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_769) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_154 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_788 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_762) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_716 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
			      >> 7U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 7U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				     >> 4U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						      >> 4U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				   >> 4U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 4U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_716 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
			      >> 7U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 7U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				     >> 4U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						      >> 4U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				   >> 4U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 4U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1052 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
		      >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1052 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
		      >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_1027)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_783 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_760)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_854 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_829)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    VL_SHIFTR_WWI(320,320,9, __Vtemp1871, vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_871, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_946 
	= (1U & ((~ __Vtemp1871[0U]) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_154 
	= ((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_795 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_769)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_790 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_767)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    VL_SHIFTR_WWI(320,320,9, __Vtemp1872, vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_877, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_950 
	= (1U & ((~ __Vtemp1872[0U]) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_154 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_795 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_769) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_790 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_767)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    VL_SHIFTR_WWI(320,320,9, __Vtemp1873, vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_877, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_950 
	= (1U & ((~ __Vtemp1873[0U]) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_538 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_119)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_781 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_119)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_538 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_119)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_781 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_119)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_538 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_119)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_781 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_119)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_538 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_119)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_781 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_119)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_827 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_182) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_483 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_417) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
	       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_182) 
		    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				     & (QData)((IData)(
						       (0x10000U 
							^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_606 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_417) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
		& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_182) 
		   | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				    & (QData)((IData)(
						      (0x80000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)))))))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_448 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_543 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_529 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_147)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_686 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_147)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1181 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1087)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1709 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_565)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_556))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_614 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_602)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_593))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_651 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_639)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_630))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_688 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_676)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_667))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_725 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_713)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_704))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_762 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_750)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_741))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1529 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1519 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1425)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1529 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1519 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1425)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1529 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1519 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_855 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_626 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_870 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_839)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT___T_846 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__ww__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__buffer__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_from_coherence_manager_with_no_name__DOT__filter__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_860 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_303 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid)) 
		   | (1U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
				   >> 5U)))) | (0U 
						== 
						((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
						  ? 1U
						  : 0U))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4156 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid) 
		     & (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1351 
	= (1U & (((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___GEN_15) 
			 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1257))) 
		  >> (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3107) 
			    >> 2U))) | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1351 
	= (1U & (((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1320)
			   ? 1U : 0U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1257))) 
		  >> (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x23U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1191 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_573 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_561)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_552)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_615 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_603)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_594)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_657 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_645)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_699 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_687)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_741 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_729)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_783 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_771)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_762)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_855 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_860 
	= (((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_724 
	= (((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
			      >> 9U))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						    >> 9U)))) 
	       | (0x10U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
				     >> 6U)))) | (0x11U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						      >> 6U)))) 
	     | (0x13U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
				   >> 6U)))) | (0x12U 
						== 
						(0x1fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1058 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_855 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_833)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_860 
	= (((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_835)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1169 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1075)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1179 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_306 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))
		      : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_586 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_561)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_556))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_623 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_598)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_593))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_660 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_635)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_630))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_697 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_672)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_667))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_734 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_709)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_704))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_771 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_746)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_741))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1169 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1075)) 
			      >> (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					   >> 6U)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1169 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1075)) 
			      >> (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					   >> 6U)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_336 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309)) 
		  | ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_293)) 
		     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___GEN_0)))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_530 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid)) 
		  | (1U >= (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0) 
					 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1))) 
				  + (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2) 
					   + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3))))))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__61(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__61\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_35));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_748 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1277 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1271) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1271) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1268) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_822 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_748) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_760)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1277) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1277)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__62(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__62\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1875,95,0,3);
    //char	__VpadToAlign236[4];
    VL_SIGW(__Vtemp1876,95,0,3);
    //char	__VpadToAlign252[4];
    VL_SIGW(__Vtemp1879,95,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp1880,95,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(__Vtemp1882,95,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(__Vtemp1883,511,0,16);
    VL_SIGW(__Vtemp1884,511,0,16);
    VL_SIGW(__Vtemp1893,95,0,3);
    //char	__VpadToAlign444[4];
    VL_SIGW(__Vtemp1894,95,0,3);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp1897,95,0,3);
    //char	__VpadToAlign476[4];
    VL_SIGW(__Vtemp1898,95,0,3);
    //char	__VpadToAlign492[4];
    VL_SIGW(__Vtemp1899,95,0,3);
    //char	__VpadToAlign508[4];
    VL_SIGW(__Vtemp1902,95,0,3);
    //char	__VpadToAlign524[4];
    VL_SIGW(__Vtemp1903,95,0,3);
    //char	__VpadToAlign540[4];
    VL_SIGW(__Vtemp1906,95,0,3);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp1907,95,0,3);
    //char	__VpadToAlign572[4];
    VL_SIGW(__Vtemp1910,95,0,3);
    //char	__VpadToAlign588[4];
    VL_SIGW(__Vtemp1911,95,0,3);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp1914,95,0,3);
    //char	__VpadToAlign620[4];
    VL_SIGW(__Vtemp1915,95,0,3);
    //char	__VpadToAlign636[4];
    VL_SIGW(__Vtemp1918,95,0,3);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp1919,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_14)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full) 
	       & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_275 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_265) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_265) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1196 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1087 
			| vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_466 
	= (0xfffffffU & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454))
			  ? (~ (2U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
					 << 1U)))) : 
			 (2U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
				<< 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1312 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1238) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1250)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1238) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1358))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1296 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1222) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1234)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1222) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1342))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen)
	    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_63))
	    : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_44)) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_15)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_68 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_35) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_67));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_35) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_67));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu_io_debug_if 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_134) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_134) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_50 
	= ((VL_ULL(0xff00ff00ff00ff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_40 
					>> 8U)) | (VL_ULL(0xff00ff00ff00ff00) 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_40 
						      << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_50 
	= ((VL_ULL(0xff00ff00ff00ff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_40 
					>> 8U)) | (VL_ULL(0xff00ff00ff00ff00) 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_40 
						      << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
	    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_973) 
	   | (((QData)((IData)((((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
				    ? 0xffU : 0U) << 0x18U) 
				 | (((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
				      ? 0xffU : 0U) 
				    << 0x10U)) | ((
						   ((0x20U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
						     ? 0xffU
						     : 0U) 
						   << 8U) 
						  | ((0x10U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
						      ? 0xffU
						      : 0U))))) 
	       << 0x20U) | (QData)((IData)((((((8U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
					        ? 0xffU
					        : 0U) 
					      << 0x18U) 
					     | (((4U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
						  ? 0xffU
						  : 0U) 
						<< 0x10U)) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_821))
						   ? 0xffU
						   : 0U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
	    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_973) 
	   | (((QData)((IData)((((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
				    ? 0xffU : 0U) << 0x18U) 
				 | (((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
				      ? 0xffU : 0U) 
				    << 0x10U)) | ((
						   ((0x20U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
						     ? 0xffU
						     : 0U) 
						   << 8U) 
						  | ((0x10U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
						      ? 0xffU
						      : 0U))))) 
	       << 0x20U) | (QData)((IData)((((((8U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
					        ? 0xffU
					        : 0U) 
					      << 0x18U) 
					     | (((4U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
						  ? 0xffU
						  : 0U) 
						<< 0x10U)) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_878))
						   ? 0xffU
						   : 0U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
			   << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201 
	= ((~ (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
					 << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1028 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1027));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1036) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_637) 
	      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___GEN_381 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1036) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_637))
	    ? 0U : ((1U & (((((((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					     >> 2U)) 
				 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1176))) 
				| ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				      >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
						>> 4U)) 
				    | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 5U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
						  >> 6U))) 
				   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1192) 
				      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1203)))) 
			       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1180) 
				  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1207))) 
			      | (((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				     >> 8U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					       >> 9U)) 
				   | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				       >> 7U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1227))) 
				  | ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0xaU) & 
				       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0xbU)) | 
				      ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0xcU) & 
				       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0xdU))) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1243) 
					& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1254)))) 
				 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1231) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1258)))) 
			     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1211) 
				& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1262))) 
			    | (((((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				     >> 0xfU) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
						 >> 0x10U)) 
				   | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				       >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1283))) 
				  | ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0x11U) & 
				       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					>> 0x12U)) 
				      | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					  >> 0x13U) 
					 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					    >> 0x14U))) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1299) 
					& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1310)))) 
				 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1287) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1314))) 
				| (((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				       >> 0x16U) & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				       >> 0x17U)) | 
				     ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				       >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1334))) 
				    | ((((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					  >> 0x18U) 
					 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					    >> 0x19U)) 
					| ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					    >> 0x1aU) 
					   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
					      >> 0x1bU))) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1350) 
					  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1361)))) 
				   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1338) 
				      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1365)))) 
			       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1318) 
				  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1369)))) 
			   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1211) 
			       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1262)) 
			      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1318) 
				 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1369)))))
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__isValid 
			& (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit))
		     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_valid)
			 ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_bits_isValid)
			     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__isValid 
				| ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__waddr)))
			     : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__isValid 
				& (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__waddr)))))
			 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__isValid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1122 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1016));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_71))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_74))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_82 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_80))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_71))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_74))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_82 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_80))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_293 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_286) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_286))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_71))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_74))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_80))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_307 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245) 
		   - (1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
			    | (1U & (((IData)(1U) << 
				      (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501))) 
				     >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_285 
	= (0x3fU & ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
			      << 1U)) | (7U & (~ (0x3fU 
						  & ((IData)(7U) 
						     << 
						     (3U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_318 
	= ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	   & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_26501) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_71))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_63) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_74))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_82 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_66) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_80))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_307 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245) 
		   - (1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
			    | (1U & (((IData)(1U) << 
				      (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515))) 
				     >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_285 
	= (0x3fU & ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
			      << 1U)) | (7U & (~ (0x3fU 
						  & ((IData)(7U) 
						     << 
						     (3U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_318 
	= ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	   & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_515) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_526 
	= ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
	    ? 0U : ((2U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
		     ? 1U : ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
			      ? 2U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
				       ? 3U : ((0x10U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
					        ? 4U
					        : (
						   (0x20U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
						    ? 5U
						    : 
						   ((0x40U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
						     ? 6U
						     : 
						    ((0x80U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
						      ? 7U
						      : 
						     ((0x100U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
						       ? 8U
						       : 
						      ((0x200U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
						        ? 9U
						        : 
						       ((0x400U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							  ? 0xbU
							  : 
							 ((0x1000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							   ? 0xcU
							   : 
							  ((0x2000U 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							    ? 0xdU
							    : 
							   ((0x4000U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							     ? 0xeU
							     : 
							    ((0x8000U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							      ? 0xfU
							      : 
							     ((0x10000U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							       ? 0x10U
							       : 
							      ((0x20000U 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
							        ? 0x11U
							        : 
							       ((0x40000U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
								 ? 0x12U
								 : 
								((0x80000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
								  ? 0x13U
								  : 
								 ((0x100000U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
								   ? 0x14U
								   : 
								  ((0x200000U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_458)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
	= (((QData)((IData)(((0x55555555U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_126 
					     >> 1U)) 
			     | (0xaaaaaaaaU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_126 
					       << 1U))))) 
	    << 0x14U) | (QData)((IData)((((0x55550U 
					   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_169) 
					      << 3U)) 
					  | (0xaaaa0U 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_169) 
						<< 5U))) 
					 | ((8U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							    >> 0x30U)) 
						   << 3U)) 
					    | ((4U 
						& ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							    >> 0x31U)) 
						   << 2U)) 
					       | ((2U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							       >> 0x32U)) 
						      << 1U)) 
						  | (1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
								>> 0x33U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_hit_state_state 
	= (3U & ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_611) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_flush_valid)))
		     ? ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
			 << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
				     >> 0x14U)) : 0U) 
		   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_615) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_flush_valid)))
		       ? ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
			   << 0x16U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
					>> 0xaU)) : 0U)) 
		  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_619) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_flush_valid)))
		      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U]
		      : 0U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_623) 
				 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_flush_valid)))
				 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
				    >> 0x16U) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_hit_way 
	= (((((0U < (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
			   >> 0x16U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_623)) 
	     << 3U) | (((0U < (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U])) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_619)) 
		       << 2U)) | ((((0U < (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
						  << 0x16U) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
						    >> 0xaU)))) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_615)) 
				   << 1U) | ((0U < 
					      (3U & 
					       ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
						 << 0xcU) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
						   >> 0x14U)))) 
					     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_611))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3385 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3380) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3380)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3511 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3480) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3507));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3570 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3539) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3566));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3634 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3603) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3630));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3697 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3674) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3693));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_356 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_354)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_349));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_226 
	= (0x7fffffU & ((0xffU | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_354)
				    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_349)) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? 3U : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				 ? 0U : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					  ? 1U : ((0xbU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						   ? 2U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 4U
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 0U
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						      ? 1U
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						       ? 2U
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						        ? 3U
						        : 0U)))))))))
		    : 0U) : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_grow_param));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_111 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_76) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_74) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_76) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_74) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_73) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_71) 
					& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_73) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_71) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_70) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_70) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_67) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_67) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_928) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_942)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_928) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1090)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_41 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_558 
	= (0xffU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_600 
	= (0x7fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_642 
	= (0x3fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_684 
	= (0x1fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		     >> 3U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_726 
	= (0xfU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		    >> 4U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_768 
	= (7U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21)) 
		  >> 5U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_557)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_41 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1204 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141) 
		   - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)) 
		      & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1189)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1260)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1189)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1260));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1148 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1145) 
		 | (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1145) 
			  << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_539 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_529) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_529) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_486 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_476 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_476 
				      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_616 
	= (0xffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_593))
		     ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_605)) 
			   | (0xfU & ((IData)(1U) << 
				      (2U | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_593) 
						   >> 2U)))))))
		     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_605) 
			| (0xfU & ((IData)(1U) << (2U 
						   | (1U 
						      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_593) 
							 >> 2U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array 
	= (VL_ULL(0x3ffffffff) & (((VL_ULL(0) != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3064)
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array
				    : VL_ULL(0)) | 
				  (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
				    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)))
				    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array)
				    : VL_ULL(0))));
    VL_EXTEND_WQ(66,63, __Vtemp1875, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1876, __Vtemp1875, 3U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2351 
	= ((((((QData)((IData)((0xfffffU & ((__Vtemp1876[1U] 
					     << 0x14U) 
					    | (__Vtemp1876[0U] 
					       >> 0xcU))))) 
	       << 0x2aU) | ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag)) 
			    << 0xfU)) | ((QData)((IData)(
							 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count) 
							   << 1U) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_u)))) 
					 << 0xcU)) 
	    | ((QData)((IData)(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_g) 
				  << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae) 
					    << 2U)) 
				| (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2307) 
				      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_w)) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_d)) 
				    << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2307) 
					      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_x)))))) 
	       << 8U)) | (QData)((IData)(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2307) 
					      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_r)) 
					     << 7U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_w) 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
					       << 6U)) 
					   | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
						  & (((VL_ULL(0) 
						       == 
						       (VL_ULL(0xca000000) 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
						      | (VL_ULL(0) 
							 == 
							 (VL_ULL(0xc0000000) 
							  & (VL_ULL(0x80000000) 
							     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
						     | (VL_ULL(0) 
							== 
							(VL_ULL(0xc0000000) 
							 & (VL_ULL(0x40000000) 
							    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))))) 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1367)
						     ? 
						    (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1429) 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x)) 
						     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1370))
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1192)
						      ? 
						     (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1254) 
						       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x)) 
						      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1195))
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1017)
						       ? 
						      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079) 
							& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x)) 
						       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1020))
						       : 
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_842)
						        ? 
						       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_904) 
							 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x)) 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_845))
						        : 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_667)
							 ? 
							(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_729) 
							  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x)) 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_670))
							 : 
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_492)
							  ? 
							 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_554) 
							   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x)) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_495))
							  : 
							 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_317)
							   ? 
							  (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_379) 
							    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x)) 
							   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_320))
							   : 
							  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_142)
							    ? 
							   (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_204) 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x)) 
							    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_145))
							    : 
							   (1U 
							    < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv))))))))))) 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
					       << 5U) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_r) 
						  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
						 << 4U))) 
					  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_al) 
					       << 3U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_al) 
						 << 2U)) 
					     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff) 
						 << 1U) 
						| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable)))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_0_ext_W0_mask 
	= ((0xffffffc0U & ((((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
			     << 7U) | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
				       << 6U)) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
	   | ((0xfffffff0U & ((((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
				<< 5U) | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
					  << 4U)) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
	      | ((0xfffffffcU & ((((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
				   << 3U) | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
					     << 2U)) 
				 & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
		 | ((((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226) 
		      << 1U) | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_226)) 
		    & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_14)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	       & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1184 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1075 
			| vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_7)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_686 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_b_bits_user)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_321 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_b_bits_user)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_503));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_504 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_503));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_503));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_478 
	= ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
	    ? 0U : ((2U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
		     ? 1U : ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
			      ? 2U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
				       ? 3U : ((0x10U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
					        ? 4U
					        : (
						   (0x20U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
						    ? 5U
						    : 
						   ((0x40U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
						     ? 6U
						     : 
						    ((0x80U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
						      ? 7U
						      : 
						     ((0x100U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
						       ? 8U
						       : 
						      ((0x200U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
						        ? 9U
						        : 
						       ((0x400U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							  ? 0xbU
							  : 
							 ((0x1000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							   ? 0xcU
							   : 
							  ((0x2000U 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							    ? 0xdU
							    : 
							   ((0x4000U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							     ? 0xeU
							     : 
							    ((0x8000U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							      ? 0xfU
							      : 
							     ((0x10000U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							       ? 0x10U
							       : 
							      ((0x20000U 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
							        ? 0x11U
							        : 
							       ((0x40000U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
								 ? 0x12U
								 : 
								((0x80000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
								  ? 0x13U
								  : 
								 ((0x100000U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
								   ? 0x14U
								   : 
								  ((0x200000U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_410)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
	= (((QData)((IData)(((0x55555555U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_78 
					     >> 1U)) 
			     | (0xaaaaaaaaU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_78 
					       << 1U))))) 
	    << 0x14U) | (QData)((IData)((((0x55550U 
					   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_121) 
					      << 3U)) 
					  | (0xaaaa0U 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_121) 
						<< 5U))) 
					 | ((8U & ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							    >> 0x30U)) 
						   << 3U)) 
					    | ((4U 
						& ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							    >> 0x31U)) 
						   << 2U)) 
					       | ((2U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							       >> 0x32U)) 
						      << 1U)) 
						  | (1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
								>> 0x33U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_132 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_131);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sig 
	   & (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
			   << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201 
	= ((~ (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
					 << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_deq 
	= (0x3fffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_976) 
			& (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			   >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_deq 
	= (0x1fffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_976) 
			& (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			   >> 3U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_568 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_556) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_561))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_565)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_605 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_593) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_598))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_602)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_642 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_630) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_635))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_639)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_679 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_667) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_672))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_676)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_716 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_704) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_709))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_713)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_753 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_741) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_746))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_750)));
    VL_EXTEND_WQ(76,52, __Vtemp1879, (VL_ULL(0xfffffffffffff) 
				      & (((QData)((IData)(
							  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U])))));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1880, __Vtemp1879, 0x18U);
    __Vtemp1882[0U] = (IData)((((QData)((IData)((1U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
				<< 0x20U) | (QData)((IData)(
							    ((0xff800000U 
							      & ((((0U 
								    == 
								    (7U 
								     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									 << 3U) 
									| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									   >> 0x1dU)))) 
								   | (6U 
								      <= 
								      (7U 
								       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									   << 3U) 
									  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									     >> 0x1dU)))))
								   ? 
								  ((0x1c0U 
								    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									<< 9U) 
								       | (0x1c0U 
									  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									     >> 0x17U)))) 
								   | (0x3fU 
								      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									  << 0xcU) 
									 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									    >> 0x14U))))
								   : 
								  ((IData)(0x100U) 
								   + 
								   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
								     << 0xcU) 
								    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
								       >> 0x14U)))) 
								 << 0x17U)) 
							     | (0x7fffffU 
								& ((0x7ff800U 
								    & (__Vtemp1880[2U] 
								       << 0xbU)) 
								   | (__Vtemp1880[1U] 
								      >> 0x15U))))))));
    __Vtemp1882[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
		       | (IData)(((((QData)((IData)(
						    (1U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & ((((0U 
									== 
									(7U 
									 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									     << 3U) 
									    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									       >> 0x1dU)))) 
								       | (6U 
									  <= 
									  (7U 
									   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									       << 3U) 
									      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
										>> 0x1dU)))))
								       ? 
								      ((0x1c0U 
									& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									    << 9U) 
									   | (0x1c0U 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
										>> 0x17U)))) 
								       | (0x3fU 
									  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									      << 0xcU) 
									     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
										>> 0x14U))))
								       : 
								      ((IData)(0x100U) 
								       + 
								       ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
									 << 0xcU) 
									| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
									   >> 0x14U)))) 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & ((0x7ff800U 
									& (__Vtemp1880[2U] 
									   << 0xbU)) 
								       | (__Vtemp1880[1U] 
									  >> 0x15U))))))) 
				  >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_95[0U] 
	= __Vtemp1882[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_95[1U] 
	= __Vtemp1882[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_95[2U] 
	= (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___GEN_12 
	= (VL_ULL(0x3fffffffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_259)
					  ? ((VL_ULL(0x7fffffffffffff) 
					      & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_214)
						    ? 
						   ((QData)((IData)(
								    VL_LTES_IQQ(1,63,63, VL_ULL(0), 
										(VL_ULL(0x7fffffffffffffff) 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248)))) 
						    << 0x36U)
						    : VL_ULL(0)) 
						  | (((1U 
						       >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt))
						      ? VL_ULL(0x20000000000000)
						      : VL_ULL(0))) 
						 | (VL_ULL(0x1fffffffffffff) 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_193)
						        ? 
						       ((QData)((IData)(
									VL_LTES_IQQ(1,63,63, VL_ULL(0), 
										(VL_ULL(0x7fffffffffffffff) 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_248)))) 
							<< 0x34U)
						        : VL_ULL(0))))) 
					     | ((1U 
						 < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
						 ? 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
						 | ((VL_ULL(1) 
						     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						    >> 2U))
						 : VL_ULL(0)))
					  : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_178 
	= (0x1fU & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__normalCase_S))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
			  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
			      ? ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
						>> 0x17U)))
				  ? 0x18U : 0x19U) : 0x1aU)
			  : 0U)) | (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
				     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__skipCycle2)))
				     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
					- (IData)(1U))
				     : 0U)) | ((0U 
						!= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___GEN_10 
	= (0x7fffffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
			   | (2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)))
			   ? (VL_LTES_III(1,31,31, 0U, 
					  (0x7fffffffU 
					   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248))
			       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248
			       : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem)
			   : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rem_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_259 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) 
	   | ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	      & VL_LTES_III(1,31,31, 0U, (0x7fffffffU 
					  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_overflow 
	= (1U & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				      << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						 >> 0x1fU)))
		  ? ((0x20U <= (0x7ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					     >> 0x14U)))) 
		     | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
			 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			    | (((0x1fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				& (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
					   >> 0x20U))) 
			       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundCarryBut2)))
			 : ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
			     ? ((0x1fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				& ((0U != (0x7fffffffU 
					   & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
						      >> 2U)))) 
				   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundIncr)))
			     : ((0x1fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				| ((0x1eU == (0x7ffU 
					      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						  << 0xcU) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						    >> 0x14U)))) 
				   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundCarryBut2))))))
		  : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
		      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundIncr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_overflow 
	= (1U & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
				      << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						 >> 0x1fU)))
		  ? ((0x40U <= (0x7ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					     >> 0x14U)))) 
		     | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
			 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			    | (((0x3fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U]) 
			       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundCarryBut2)))
			 : ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
			     ? ((0x3fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				& ((VL_ULL(0) != (VL_ULL(0x7fffffffffffffff) 
						  & (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U])) 
						      << 0x3eU) 
						     | (((QData)((IData)(
									 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U])) 
							 << 0x1eU) 
							| ((QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U])) 
							   >> 2U))))) 
				   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr)))
			     : ((0x3fU == (0x7ffU & 
					   ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0x14U)))) 
				| ((0x3eU == (0x7ffU 
					      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						  << 0xcU) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						    >> 0x14U)))) 
				   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundCarryBut2))))))
		  : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
		      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
		     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) 
	     & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
	    << 3U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) 
			& (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
		       << 2U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) 
				   & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
				  << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) 
					    & (0U == 
					       (3U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
	     & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
	    << 3U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
			& (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
		       << 2U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
				   & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
				  << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
					    & (0U == 
					       (3U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
	     & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
	    << 3U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
			& (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
		       << 2U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
				   & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))) 
				  << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_564) 
					    & (0U == 
					       (3U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_215)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2469 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2402) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2414)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2577 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2522)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__releaseDone 
	= (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4058))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4049));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4089 
	= (0x7ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4058) 
		      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4061) 
			    - (IData)(1U)))) + (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__releaseRejected)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
						    + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1011 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_976_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_976_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_750)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_940 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_750));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_871 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_750) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_799 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_744)));
    __Vtemp1883[0U] = 1U;
    __Vtemp1883[1U] = 0U;
    __Vtemp1883[2U] = 0U;
    __Vtemp1883[3U] = 0U;
    __Vtemp1883[4U] = 0U;
    __Vtemp1883[5U] = 0U;
    __Vtemp1883[6U] = 0U;
    __Vtemp1883[7U] = 0U;
    __Vtemp1883[8U] = 0U;
    __Vtemp1883[9U] = 0U;
    __Vtemp1883[0xaU] = 0U;
    __Vtemp1883[0xbU] = 0U;
    __Vtemp1883[0xcU] = 0U;
    __Vtemp1883[0xdU] = 0U;
    __Vtemp1883[0xeU] = 0U;
    __Vtemp1883[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp1884, __Vtemp1883, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[1U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[2U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[3U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[4U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[5U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[6U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[7U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[8U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[9U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xaU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xbU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xcU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xdU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xeU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xfU] 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_892)))
	    ? __Vtemp1884[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_527 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_525)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_520));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_525)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_520));
    vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_794))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_887)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1018));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_804 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_801) 
		    | (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_801) 
				<< 1U))));
    vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT__mem__DOT__mem_ext_W0_mask 
	= ((0xffffffc0U & ((((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
			     << 7U) | ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
				       << 6U)) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
	   | ((0xfffffff0U & ((((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
				<< 5U) | ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
					  << 4U)) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
	      | ((0xfffffffcU & ((((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
				   << 3U) | ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
					     << 2U)) 
				 & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data))) 
		 | ((((IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290) 
		      << 1U) | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__sram__DOT___T_290)) 
		    & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_940 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3127 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3121) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3121) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3118) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_928 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2943 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2937) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2937) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2934) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2429 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2423) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2423) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2420) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2613 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2607) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2607) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2604) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_366 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_355)) 
	   | (0U == (7U & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___GEN_0))
			    ? (~ (0x3ffU & (((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
					    >> 3U)))
			    : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_701 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_453)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_630 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_453) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_586 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_453));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4368 
	= (0xffU & ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		     ? 0U : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4360 
					 >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4360))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (4U == (5U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
	       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
			  >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
						>> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2709 
	= ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1) 
			   << 0x10U)) | (0xffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2703 
	= ((0xff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1) 
		       << 8U)) | (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1
	    : (((QData)((IData)(VL_NEGATE_I((IData)(
						    (1U 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2243 
							>> 0x1fU)))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2243))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__lhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
	       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in1 
			  >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_bits_in1 
						>> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0
	    : (((QData)((IData)((0xffffffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2230 
									     >> 0x27U)))))))) 
		<< 0x28U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2230));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_xcpt)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_cause
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2807)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_cause 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_xcpt)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_cause
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2807)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_invalidate_lr 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2802) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2796));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_exception 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2802) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2796));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2802) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2796));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1207 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_masked) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_305)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_247));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_305)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_247));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
			    << 0x1eU) | (0x3ffffffeU 
					 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
					    >> 2U)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
	       ? ((0U == (7U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_170)))
	       : ((0U != (7U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_170)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
		  >> 2U)) | (0xffeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
				       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_211 
	= ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_201) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_201) 
					 << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_102 
	   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_104);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_102 
	   | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_104);
    VL_EXTEND_WQ(66,63, __Vtemp1893, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1894, __Vtemp1893, 3U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2351 
	= ((((((QData)((IData)((0xfffffU & ((__Vtemp1894[1U] 
					     << 0x14U) 
					    | (__Vtemp1894[0U] 
					       >> 0xcU))))) 
	       << 0x2aU) | ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)) 
			    << 0xfU)) | ((QData)((IData)(
							 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count) 
							   << 1U) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_u)))) 
					 << 0xcU)) 
	    | ((QData)((IData)(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_g) 
				  << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae) 
					    << 2U)) 
				| (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2307) 
				      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_w)) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_d)) 
				    << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2307) 
					      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_x)))))) 
	       << 8U)) | (QData)((IData)(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2307) 
					      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__r_pte_r)) 
					     << 7U) 
					    | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
						  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1067) 
						      | (VL_ULL(0) 
							 == 
							 (VL_ULL(0xc0000000) 
							  & (VL_ULL(0x80000000) 
							     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
						     | (VL_ULL(0) 
							== 
							(VL_ULL(0xc0000000) 
							 & (VL_ULL(0x40000000) 
							    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_409)
						     ? 
						    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
						     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_412))
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_361)
						      ? 
						     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
						      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_364))
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_313)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
						       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_316))
						       : 
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_265)
						        ? 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_268))
						        : 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_217)
							 ? 
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_220))
							 : 
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_169)
							  ? 
							 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_172))
							  : 
							 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_121)
							   ? 
							  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
							   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_124))
							   : 
							  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_73)
							    ? 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
							    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_76))
							    : 
							   (1U 
							    < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv))))))))))) 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
					       << 6U)) 
					   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_x) 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
					       << 5U) 
					      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_409)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
						       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_412))
						       : 
						      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_361)
						        ? 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
							| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_364))
						        : 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_313)
							 ? 
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_316))
							 : 
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_265)
							  ? 
							 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_268))
							  : 
							 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_217)
							   ? 
							  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
							   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_220))
							   : 
							  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_169)
							    ? 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
							    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_172))
							    : 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_121)
							     ? 
							    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
							     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_124))
							     : 
							    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_73)
							      ? 
							     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
							      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_76))
							      : 
							     (1U 
							      < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv))))))))))) 
						  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_ae))) 
						 << 4U))) 
					  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_al) 
					       << 3U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_al) 
						 << 2U)) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
						  & ((((VL_ULL(0) 
							== 
							(VL_ULL(0xc8000000) 
							 & (VL_ULL(0x8000000) 
							    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
						       | (VL_ULL(0) 
							  == 
							  (VL_ULL(0xca010000) 
							   & (VL_ULL(0x2000000) 
							      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
						      | (VL_ULL(0) 
							 == 
							 (VL_ULL(0xca012000) 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
						     | (VL_ULL(0) 
							== 
							(VL_ULL(0xc0000000) 
							 & (VL_ULL(0x40000000) 
							    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
						 << 1U) 
						| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__cacheable)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3511 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3480) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3507));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3570 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3539) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3566));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3634 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3603) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3630));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3385 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3380) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3380)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3697 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3674) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3693));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_134 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_96) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_97 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_96));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_155 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_119) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_119));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_176 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_140) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_141 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_140));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_198 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_161) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_162 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_161));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_ras_update_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_300) 
	       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_316) 
		   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_350) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_347))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
		     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_432) 
			| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_424)))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_300) 
	       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715) 
		   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_749) 
		      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_746))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_719) 
		     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_831) 
			| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_823))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_628) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_300));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3832 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__tlb_miss));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3830 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_imem_sfence_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_372 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_367) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_367)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_533 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdate))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageReplEn)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageReplEn));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_540 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageUpdate))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageReplEn)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageReplEn));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___GEN_373 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__r_btb_update_valid)
	    ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageValid) 
		| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageReplEn)) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageReplEn))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageValid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2728 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_npc_misaligned));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324 
	= (((0x1555400U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_275) 
			   << 9U)) | (0x2aaa800U & 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_275) 
				       << 0xbU))) | 
	   (((0x154U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_308) 
			<< 1U)) | (0x2a8U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_308) 
					     << 3U))) 
	    | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
		      >> 0x17U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
					  >> 0x19U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_477 
	= (0xfffffffU & ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454))
			  ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_466) 
				| (0xfU & ((IData)(1U) 
					   << (2U | 
					       (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
						   >> 4U)))))))
			  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_466 
			     | (0xfU & ((IData)(1U) 
					<< (2U | (1U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
						     >> 4U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_debug_breakpoint 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_load) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_68) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_store) 
	      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_101) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2277 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if) 
	   | (0U != (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst) 
		      << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_60 
	= ((VL_ULL(0xf0f0f0f0f0f0f0f) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_50 
					 >> 4U)) | 
	   (VL_ULL(0xf0f0f0f0f0f0f0f0) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_50 
					  << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_60 
	= ((VL_ULL(0xf0f0f0f0f0f0f0f) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_50 
					 >> 4U)) | 
	   (VL_ULL(0xf0f0f0f0f0f0f0f0) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_50 
					  << 4U)));
    VL_EXTEND_WQ(65,64, __Vtemp1897, vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975);
    VL_EXTEND_WQ(65,64, __Vtemp1898, ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param))
				       ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977
				       : (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977)));
    VL_ADD_W(3, __Vtemp1899, __Vtemp1897, __Vtemp1898);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[0U] 
	= __Vtemp1899[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U] 
	= __Vtemp1899[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[2U] 
	= (1U & __Vtemp1899[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133 
	= ((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127) 
	   | (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133 
	= ((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127) 
	   | (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_replay 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_replay)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_entry)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1122)
	        ? 0x1cU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_entry)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1122) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx)
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1122)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617))
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_117 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_82) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_80) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_82) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_80) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_79) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_77) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_79) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_77) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_76) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_74) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_76) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_74) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_73) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_71) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_73) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_71) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_117 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_82) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_80) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_82) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_80) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_79) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_77) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_79) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_77) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_76) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_74) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_76) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_74) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_73) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_71) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_73) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_71) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_298 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_293) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_293)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_117 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_80) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address))) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_80) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_79) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_77) 
					& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address))) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_79) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_77) 
						  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_76) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_74) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address))) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_76) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_74) 
			      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_73) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_71) 
					  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address))) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_73) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_71) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_address)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_292 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_285) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_285))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_117 
	= ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_82) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_80) 
		  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address)) 
	      << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_82) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_80) 
			    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address))) 
			<< 6U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_79) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_77) 
					& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address)) 
				    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_79) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_77) 
						  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address))) 
					      << 4U))) 
	   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_76) 
		 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_74) 
		    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address)) 
		<< 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_76) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_74) 
			      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address))) 
			  << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_73) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_71) 
					  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address)) 
				      << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_73) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_71) 
						   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_292 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_285) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_285))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_538 
	= (0x3ffU & ((0x1ffU & ((0U == (0xffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							 >> 0x17U))))
				 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_526))
				 : (0xffU & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
						     >> 0x17U))))) 
		     + (0x80U | ((0U == (0xffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							  >> 0x17U))))
				  ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_346 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191))
	    ? 0U : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
				   >> 1U))) ? 1U : 
		    ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
				    >> 2U))) ? 2U : 
		     ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
				     >> 3U))) ? 3U : 
		      ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
				      >> 4U))) ? 4U
		        : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
					  >> 5U))) ? 5U
			    : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
					      >> 6U)))
			        ? 6U : ((1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
						       >> 7U)))
					 ? 7U : ((1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
							     >> 8U)))
						  ? 8U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
							      >> 9U)))
						   ? 9U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
							       >> 0xaU)))
						    ? 0xaU
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								>> 0xbU)))
						     ? 0xbU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								 >> 0xcU)))
						      ? 0xcU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								  >> 0xdU)))
						       ? 0xdU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								   >> 0xeU)))
						        ? 0xeU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								    >> 0xfU)))
							 ? 0xfU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								     >> 0x10U)))
							  ? 0x10U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								      >> 0x11U)))
							   ? 0x11U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
								       >> 0x12U)))
							    ? 0x12U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									>> 0x13U)))
							     ? 0x13U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									 >> 0x14U)))
							      ? 0x14U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									  >> 0x15U)))
							       ? 0x15U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									   >> 0x16U)))
							        ? 0x16U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									    >> 0x17U)))
								 ? 0x17U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									     >> 0x18U)))
								  ? 0x18U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									      >> 0x19U)))
								   ? 0x19U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
									       >> 0x1aU)))
								    ? 0x1aU
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x1bU)))
								     ? 0x1bU
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x1cU)))
								      ? 0x1cU
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x1dU)))
								       ? 0x1dU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x1eU)))
								        ? 0x1eU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x1fU)))
									 ? 0x1fU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x20U)))
									  ? 0x20U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x21U)))
									   ? 0x21U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x22U)))
									    ? 0x22U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x23U)))
									     ? 0x23U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x24U)))
									      ? 0x24U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x25U)))
									       ? 0x25U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x26U)))
									        ? 0x26U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x27U)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x28U)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x29U)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2aU)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2bU)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2cU)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2dU)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2eU)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x2fU)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x30U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x31U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_191 
										>> 0x32U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_672 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_way)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe_way))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_hit_way));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3395 
	= (((0U != (0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				       >> 0x10U)))) 
	    << 4U) | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3375) 
					>> 8U))) << 3U) 
		      | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3380) 
					  >> 4U))) 
			  << 2U) | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3385) 
						   >> 2U))) 
				     << 1U) | (1U & 
					       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3385) 
						 >> 3U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3385) 
						   >> 1U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3701 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3662) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3697));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_382 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_356) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_363 
	= (0x1ffU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_356) 
			    << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_356))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_234 
	= (0xffffU & ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_226 
					>> 7U))) & 
		      (~ (0x7fffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_226 
				     >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1184 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1075 
			| vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___GEN_11 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_44) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_564 
	= (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_552) 
			+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_558))) 
		 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_561)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_606 
	= (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_594) 
			+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_600))) 
		 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_603)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_648 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_642))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_645)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_690 
	= (0x1fU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678) 
			     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_684))) 
		    - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_687)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_732 
	= (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720) 
			+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_726))) 
		 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_729)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_774 
	= (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_762) 
			+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_768))) 
		 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_771)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_ar_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___GEN_16 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1152 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1318 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)) 
	    & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
	        ? (~ (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1148) 
			    << 1U))) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0))) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1253 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
		     ? (~ (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1148)))
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162 
	= ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1148) 
		     << 1U))) & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163 
	= ((~ (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1148))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_496 
	= ((0x33333333U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_486 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_486 
				       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_deq 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_321) 
		  & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_deq 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_321) 
		  & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id)) 
		     >> 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___GEN_11 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_487 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_504));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_8 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_490 
	= (0x3ffU & ((0x1ffU & ((0U == (0xffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							 >> 0x17U))))
				 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_478))
				 : (0xffU & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
						     >> 0x17U))))) 
		     + (0x80U | ((0U == (0xffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							  >> 0x17U))))
				  ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_298 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143))
	    ? 0U : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
				   >> 1U))) ? 1U : 
		    ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
				    >> 2U))) ? 2U : 
		     ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
				     >> 3U))) ? 3U : 
		      ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
				      >> 4U))) ? 4U
		        : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
					  >> 5U))) ? 5U
			    : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
					      >> 6U)))
			        ? 6U : ((1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
						       >> 7U)))
					 ? 7U : ((1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
							     >> 8U)))
						  ? 8U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
							      >> 9U)))
						   ? 9U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
							       >> 0xaU)))
						    ? 0xaU
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								>> 0xbU)))
						     ? 0xbU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								 >> 0xcU)))
						      ? 0xcU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								  >> 0xdU)))
						       ? 0xdU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								   >> 0xeU)))
						        ? 0xeU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								    >> 0xfU)))
							 ? 0xfU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								     >> 0x10U)))
							  ? 0x10U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								      >> 0x11U)))
							   ? 0x11U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
								       >> 0x12U)))
							    ? 0x12U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									>> 0x13U)))
							     ? 0x13U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									 >> 0x14U)))
							      ? 0x14U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									  >> 0x15U)))
							       ? 0x15U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									   >> 0x16U)))
							        ? 0x16U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									    >> 0x17U)))
								 ? 0x17U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									     >> 0x18U)))
								  ? 0x18U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									      >> 0x19U)))
								   ? 0x19U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
									       >> 0x1aU)))
								    ? 0x1aU
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x1bU)))
								     ? 0x1bU
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x1cU)))
								      ? 0x1cU
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x1dU)))
								       ? 0x1dU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x1eU)))
								        ? 0x1eU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x1fU)))
									 ? 0x1fU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x20U)))
									  ? 0x20U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x21U)))
									   ? 0x21U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x22U)))
									    ? 0x22U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x23U)))
									     ? 0x23U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x24U)))
									      ? 0x24U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x25U)))
									       ? 0x25U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x26U)))
									        ? 0x26U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x27U)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x28U)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x29U)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2aU)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2bU)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2cU)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2dU)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2eU)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x2fU)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x30U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x31U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_143 
										>> 0x32U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_138 
	= ((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_132) 
	   | (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_135));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sig 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_792 
	= ((((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_753))) 
	     << 5U) | ((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_716))) 
		       << 4U)) | ((((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_679))) 
				    << 3U) | ((0U != 
					       (0xfU 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_642))) 
					      << 2U)) 
				  | (((0U != (0xfU 
					      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_605))) 
				      << 1U) | (0U 
						!= 
						(0xfU 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_568))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___GEN_12 
	= (0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_259)
			   ? ((0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_214)
					        ? (
						   VL_LTES_III(26,31,31, 0U, 
							       (0x7fffffffU 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248)) 
						   << 0x19U)
					        : 0U) 
					      | (((1U 
						   >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt))
						  ? 0x1000000U
						  : 0U)) 
					     | (0xffffffU 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_193)
						    ? 
						   (VL_LTES_III(24,31,31, 0U, 
								(0x7fffffffU 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT___T_248)) 
						    << 0x17U)
						    : 0U)))) 
			      | ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
				  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
				     | (((IData)(1U) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					>> 2U)) : 0U))
			   : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sigX_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__invalidExc) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_overflow))
	    ? ((((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))) 
		 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__excSign))
		 ? VL_ULL(0x8000000000000000) : VL_ULL(0)) 
	       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__excSign)
		   ? VL_ULL(0) : VL_ULL(0x7fffffffffffffff)))
	    : ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr) 
		      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))
	        ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__complUnroundedInt)
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__complUnroundedInt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_intExceptionFlags 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__invalidExc) 
	    << 2U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__invalidExc)) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_overflow)) 
		       << 1U) | (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__invalidExc)) 
				  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_overflow))) 
				 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__dataArb_io_in_2_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback) 
	   & (8U > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4089))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_867))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_940)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1011));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_884 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_871) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_881))) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_871));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_553 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_527) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_534 
	= (0x1ffU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_527) 
			    << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_527))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_563 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_807 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_804) 
		    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_804) 
				<< 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_1009 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_940) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3127) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3127)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_928) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2946 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2943) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2943)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2432 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2429) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2429)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2616 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2613) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2613)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLMonitor_io_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_630)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_701));
    vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_630)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_701));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_589 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_586) 
		 | (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_586) 
			  << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
	= (((VL_ULL(0xffffffffffffff00) & ((((0U == 
					      (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
					     | (7U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)))
					     ? ((1U 
						 & ((~ 
						     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ) 
						      >> 2U)) 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4368) 
						       >> 7U)))
						 ? VL_ULL(0xffffffffffffff)
						 : VL_ULL(0))
					     : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4360 
						>> 8U)) 
					   << 8U)) 
	    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4368))) 
	   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_sc_fail)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2704 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2703) 
	    << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2703));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv 
	= ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
	    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__shin_r 
	= (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
			      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
					 >> 0x20U))
			      : ((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
					 >> 3U) & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
							   >> 0x1fU))))
				  ? 0xffffffffU : 0U)))) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call)
	    ? (QData)((IData)((0xfU & ((IData)(8U) 
				       + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)
	        ? VL_ULL(3) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_cause));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1611 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_masked) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_invalidate_lr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1609 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_masked) 
	    & (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscCount))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_invalidate_lr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_trace_0_exception 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1964) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_exception));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1964) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_exception));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_tval 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_xcpt) 
	    & ((((((((((VL_ULL(2) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause) 
		       | (VL_ULL(3) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		      | (VL_ULL(4) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		     | (VL_ULL(6) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		    | (VL_ULL(5) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		   | (VL_ULL(7) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		  | (VL_ULL(1) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		 | (VL_ULL(0xd) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
		| (VL_ULL(0xf) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)) 
	       | (VL_ULL(0xc) == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause)))
	    ? (((QData)((IData)((1U & (((0U == (0x1ffffffU 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
							   >> 0x27U)))) 
					| (0x1ffffffU 
					   == (0x1ffffffU 
					       & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
							  >> 0x27U)))))
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
						   >> 0x27U))
				        : (~ (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2 
						      >> 0x26U))))))) 
		<< 0x27U) | (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1207) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_miss 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1207) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_ack_wait)));
    __Vtemp1902[0U] = 0U;
    __Vtemp1902[1U] = 0U;
    __Vtemp1902[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1903, __Vtemp1902, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    __Vtemp1906[0U] = 0U;
    __Vtemp1906[1U] = 0U;
    __Vtemp1906[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1907, __Vtemp1906, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    __Vtemp1910[0U] = 0U;
    __Vtemp1910[1U] = 0U;
    __Vtemp1910[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1911, __Vtemp1910, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    __Vtemp1914[0U] = 0U;
    __Vtemp1914[1U] = 0U;
    __Vtemp1914[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1915, __Vtemp1914, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    __Vtemp1918[0U] = 0U;
    __Vtemp1918[1U] = 0U;
    __Vtemp1918[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1919, __Vtemp1918, 
		   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_236 
	= (((((((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
				      >> 0x34U)))) 
		<< 0xdU) | ((0U != (0xfU & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
						    >> 0x30U)))) 
			    << 0xcU)) | (((0U != (0xfU 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							     >> 0x2cU)))) 
					  << 0xbU) 
					 | ((0U != 
					     (0xfU 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							 >> 0x28U)))) 
					    << 0xaU))) 
	     | (((0U != (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
					 >> 0x24U)))) 
		 << 9U) | (((0U != (0xfU & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
						    >> 0x20U)))) 
			    << 8U) | ((0U != (0xfU 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							 >> 0x1cU)))) 
				      << 7U)))) | (
						   ((((0U 
						       != 
						       (0xfU 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								   >> 0x18U)))) 
						      << 6U) 
						     | ((0U 
							 != 
							 (0xfU 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								     >> 0x14U)))) 
							<< 5U)) 
						    | (((0U 
							 != 
							 (0xfU 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								     >> 0x10U)))) 
							<< 4U) 
						       | ((0U 
							   != 
							   (0xfU 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								       >> 0xcU)))) 
							  << 3U))) 
						   | (((0U 
							!= 
							(0xfU 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								    >> 8U)))) 
						       << 2U) 
						      | (((0U 
							   != 
							   (0xfU 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								       >> 4U)))) 
							  << 1U) 
							 | (0U 
							    != 
							    (0xfU 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))))))) 
	   & (((0xaa0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_211) 
			  << 4U)) | (0x1540U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_211) 
						<< 6U))) 
	      | ((0x10U & (__Vtemp1903[1U] << 4U)) 
		 | ((8U & (__Vtemp1907[1U] << 2U)) 
		    | ((4U & __Vtemp1911[1U]) | ((2U 
						  & (__Vtemp1915[1U] 
						     >> 2U)) 
						 | (1U 
						    & (__Vtemp1919[1U] 
						       >> 4U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1369 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
	   < (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
		    >> 0x1cU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2317 
	= ((3U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))
	    ? (0xffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_172 
	= ((3U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))
	    ? 0U : ((((2U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
			     - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst)
		       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst)) 
		     << 1U) | ((2U & (((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
				      - (IData)(1U)))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_ae_inst)
			        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506 
	= ((4U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		  >> 0xaU)) | (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				     >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_594 
	= ((((((0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	        ? 0x3ffU : 0U) << 0xbU) | ((0x400U 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       << 2U)) 
					   | (0x300U 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 >> 1U)))) 
	    | ((0x80U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			 << 1U)) | (0x40U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					     >> 1U)))) 
	   | (((0x20U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			 << 3U)) | (0x10U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					     >> 7U))) 
	      | (0xeU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_880 
	= (((0x1c0U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		       << 4U)) | (0x20U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					   >> 7U))) 
	   | (0x18U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_905 
	= ((0xf80U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
	   | ((0U != (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			       >> 7U))) ? 3U : 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956 
	= ((0x3e0U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		      << 3U)) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1051 
	= ((0x30U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     >> 3U)) | (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					>> 9U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152 
	= ((0x18U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     << 3U)) | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 0xdU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_78 
	= (((0x40U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		      << 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 7U))) 
	   | (4U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		    >> 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294 
	= ((((0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	      ? 0x7fU : 0U) << 5U) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_447 
	= ((0x20U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     >> 7U)) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693 
	= (((((0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	       ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 << 1U)) 
				       | (0x20U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   << 3U)))) 
	   | ((0x18U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 7U)) | (6U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1024 
	= ((0x38U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     >> 4U)) | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_46 
	= ((0x18U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     >> 2U)) | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_188 
	= (1U & ((((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
		   - (IData)(1U)) & (3U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))) 
		 | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
			   - (IData)(1U)) >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3395 
	= (((0U != (0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				       >> 0x10U)))) 
	    << 4U) | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3375) 
					>> 8U))) << 3U) 
		      | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3380) 
					  >> 4U))) 
			  << 2U) | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3385) 
						   >> 2U))) 
				     << 1U) | (1U & 
					       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3385) 
						 >> 3U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3385) 
						   >> 1U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3701 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3662) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3697));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB_io_bht_advance_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_617)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_44)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_1027)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_300)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_69 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3832)
	    ? (QData)((IData)((0x7ffffffU & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						     >> 0xcU)))))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3836 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3830));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPageUpdate 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_367) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_372) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_372) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_372) 
							>> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__63(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__63\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_32));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_32));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_1642 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
	   & (~ (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe)
		   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 1U)) : 0U) >> 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrDataVal 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEnMaybe)
	    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
		       >> 1U)) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEnMaybe) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe)
	    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
		       >> 1U)) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8195) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8195) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8195) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8195) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8203) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8203) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8203) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8203) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8291) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8291) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8291) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8291) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8299) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8299) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8299) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8299) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8307) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8307) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8307) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8307) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8315) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8315) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8315) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8315) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8323) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8323) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8323) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8323) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8331) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8331) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8331) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8331) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8339) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8339) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8339) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8339) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8347) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8347) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8347) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8347) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8355) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8355) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8355) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8355) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8371) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8371) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8371) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8371) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8379) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8379) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8379) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8379) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8387) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8387) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8387) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8387) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8395) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8395) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8395) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8395) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8403) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8403) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8403) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8403) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8411) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8411) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x10U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8411) 
	   & (0U == (0xffU & (~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682 
				 >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8411) 
	   & (0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_359 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((0x305U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? 
	       (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5035)
	        : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec)))
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_379 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901)
	    ? ((0x105U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				     >> 0x14U))) ? 
	       (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_5035)
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d 
	= ((0x800U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_resumereq)
		        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
			   >> 0xbU)) << 0xbU)) | ((0x7feU 
						   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_hartsel)
						        : 
						       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
							>> 1U)) 
						      << 1U)) 
						  | (1U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid)
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_ackhavereset)
							 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d 
	= (((QData)((IData)((((0x1c0U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
					   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_opcode)
					   : (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x34U))) 
					 << 6U)) | 
			      (0x38U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
					  ? 0U : (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x31U))) 
					<< 3U))) | 
			     ((6U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
				       ? 2U : (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						       >> 0x2fU))) 
				     << 1U)) | (1U 
						& ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)) 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							      >> 0x2eU)))))))) 
	    << 0x2eU) | (((QData)((IData)(((0x1ff0U 
					    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_address)
						 : (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x25U))) 
					       << 4U)) 
					   | (0xfU 
					      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_mask)
						  : (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x21U))))))) 
			  << 0x21U) | (((QData)((IData)(
							((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
							  ? vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_data
							  : (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 1U))))) 
					<< 1U) | (QData)((IData)(
								 (1U 
								  & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)) 
								     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7893) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7901) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7989) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7997) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8005) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8013) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8021) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8029) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8037) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8045) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8053) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8061) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8069) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8077) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8085) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8093) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8101) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8109) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3682))));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__65(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__65\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign708[4];
    VL_SIGW(__Vtemp1972,319,0,10);
    VL_SIGW(__Vtemp1973,319,0,10);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2236 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2219)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_502 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_111)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_745 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_111)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1179 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1169 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1075)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_582 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_558)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_552))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_624 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_600)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_594))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_666 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_642)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_708 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_684)) 
		  | (8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_750 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_726)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_792 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_768)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_762))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_516 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_504)) 
		   | (~ ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)
			  ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data)))) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_484))) 
		 | (IData)(vlTOPp->reset)));
    __Vtemp1972[0U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[0U]);
    __Vtemp1972[1U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[1U]);
    __Vtemp1972[2U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[2U]);
    __Vtemp1972[3U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[3U]);
    __Vtemp1972[4U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[4U]);
    __Vtemp1972[5U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[5U]);
    __Vtemp1972[6U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[6U]);
    __Vtemp1972[7U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[7U]);
    __Vtemp1972[8U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[8U]);
    __Vtemp1972[9U] = (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U] 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877[9U]);
    VL_SHIFTR_WWI(320,320,9, __Vtemp1973, __Vtemp1972, 
		  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			     >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_971 
	= (1U & (__Vtemp1973[0U] | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_744 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_aw_valid)) 
		   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len))) 
		  | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__memory_bus_xbar__DOT___T_769 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh_auto_out_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1971 
	= ((1U >= (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) 
				+ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call))) 
			 + (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break) 
				  + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_exception)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_280 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_117)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_375 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_117)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_280 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_117)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_117)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_280 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_117)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_375 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_117)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_280 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_117)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_375 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_117)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1186 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1195 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1189)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162) 
		     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_498 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_487)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_484))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4298 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc)) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__66(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__66\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1285 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1258));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1300 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1301 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_0)
	       : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_1)
	       : (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1280) 
		     >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1421 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_0)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1300))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0
	     : VL_ULL(0)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_1)
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1301))
			      ? (VL_ULL(0x2000000000) 
				 | (((QData)((IData)(
						     (4U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode)))) 
				     << 0x28U) | ((QData)((IData)(
								  ((4U 
								    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))
								    ? 0U
								    : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL_io_q))) 
						  << 1U)))
			      : VL_ULL(0)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1180 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_26 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q) 
		 + ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready) 
		    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_748 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_678 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_949 
	= ((0U == (0x1fcU & (0x40U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_530 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid) 
	     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready)) 
	    & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
		 >> 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__67(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__67\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1974,95,0,3);
    //char	__VpadToAlign844[4];
    VL_SIGW(__Vtemp1975,127,0,4);
    VL_SIGW(__Vtemp1986,127,0,4);
    VL_SIGW(__Vtemp1988,95,0,3);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp1989,95,0,3);
    //char	__VpadToAlign908[4];
    VL_SIGW(__Vtemp1990,95,0,3);
    //char	__VpadToAlign924[4];
    VL_SIGW(__Vtemp1997,127,0,4);
    VL_SIGW(__Vtemp1998,127,0,4);
    VL_SIGW(__Vtemp2001,127,0,4);
    VL_SIGW(__Vtemp2002,127,0,4);
    VL_SIGW(__Vtemp2004,95,0,3);
    //char	__VpadToAlign1004[4];
    VL_SIGW(__Vtemp2006,127,0,4);
    VL_SIGW(__Vtemp2007,127,0,4);
    VL_SIGW(__Vtemp2009,95,0,3);
    //char	__VpadToAlign1052[4];
    VL_SIGW(__Vtemp2047,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
	= ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
	    ? 0U : ((2U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
		     ? 1U : ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
			      ? 2U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
				       ? 3U : ((0x10U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
					        ? 4U
					        : (
						   (0x20U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
						    ? 5U
						    : 
						   ((0x40U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
						     ? 6U
						     : 
						    ((0x80U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
						      ? 7U
						      : 
						     ((0x100U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
						       ? 8U
						       : 
						      ((0x200U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
						        ? 9U
						        : 
						       ((0x400U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							  ? 0xbU
							  : 
							 ((0x1000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							   ? 0xcU
							   : 
							  ((0x2000U 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							    ? 0xdU
							    : 
							   ((0x4000U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							     ? 0xeU
							     : 
							    ((0x8000U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							      ? 0xfU
							      : 
							     ((0x10000U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							       ? 0x10U
							       : 
							      ((0x20000U 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
							        ? 0x11U
							        : 
							       ((0x40000U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								 ? 0x12U
								 : 
								((0x80000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								  ? 0x13U
								  : 
								 ((0x100000U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								   ? 0x14U
								   : 
								  ((0x200000U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								    ? 0x15U
								    : 
								   ((0x400000U 
								     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								     ? 0x16U
								     : 
								    ((0x800000U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								      ? 0x17U
								      : 
								     ((0x1000000U 
								       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_324)
								       ? 0x18U
								       : 0x19U)))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_488 
	= (0xfffffffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454))
			  ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_477) 
				| (0xffU & ((IData)(1U) 
					    << (4U 
						| (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
						      >> 3U)))))))
			  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_477 
			     | (0xffU & ((IData)(1U) 
					 << (4U | (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
						      >> 3U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ldst_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_debug_breakpoint) 
	   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_load) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_68) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_store) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_101) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_70 
	= ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_60 
					  >> 2U)) | 
	   (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_60 
					  << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_70 
	= ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_60 
					  >> 2U)) | 
	   (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_60 
					  << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= (0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134) 
			   & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127)) 
			  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)))) 
			     & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
				     & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127)) 
				    & (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130))
				    ? (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							   << 2U)))) 
						   >> 2U)) 
					       | (((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126 
						   >> 1U)
						   : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= (0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134) 
			   & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127)) 
			  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)))) 
			     & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)) 
				     & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_127)) 
				    & (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_130))
				    ? (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							   << 2U)))) 
						   >> 2U)) 
					       | (((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_103)) 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_133))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_126 
						   >> 1U)
						   : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208 
	= ((VL_ULL(0) != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202) 
	   | (VL_ULL(0) != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_entry)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_taken 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bridx 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_306 
	= (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_293) 
			  >> 4U))) << 2U) | (((0U != 
					       (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_298) 
						   >> 2U))) 
					      << 1U) 
					     | (1U 
						& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_298) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_298) 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_297 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_292) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_292)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_297 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_292) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_292)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2119 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_0) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_valid)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_1) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_in_d_valid))) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_2) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_in_d_valid))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_3) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2008 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_valid) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_in_d_valid)) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_in_d_valid)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1910 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_in_d_valid) 
		       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_in_d_valid) 
				  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter_auto_in_d_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_569 
	= (((QData)((IData)(((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
					     >> 0x1fU)) 
				    << 3U)) | (7U & 
					       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_540)
						  ? 0U
						  : 
						 (7U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_538) 
						     >> 6U))) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_538) 
							>> 7U))) 
						   & (0U 
						      != 
						      (0x7fffffU 
						       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77))))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_538) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							    >> 0x17U))))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77)))) 
								  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_526)))) 
						      << 1U))
					        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_358 
	= (0x1fffU & ((0xfffU & ((0U == (0x7ffU & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							   >> 0x34U))))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_346))
				  : (0x7ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
						       >> 0x34U))))) 
		      + (0x400U | ((0U == (0x7ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							     >> 0x34U))))
				    ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3407 
	= ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3395))
	    ? (~ (2U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
			   << 1U)))) : (2U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
					      << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__multipleHits 
	= (1U & ((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits) 
			 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				    >> 1U))) | ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							 >> 2U)) 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							   >> 3U)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3465) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3476))) 
		      | ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				    >> 4U)) & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						       >> 5U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 6U)) & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							 >> 7U)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3492) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3503)))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3480) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3507))) 
		    | ((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				    >> 8U)) & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
						       >> 9U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 0xaU)) & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							   >> 0xbU)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3524) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3535))) 
			| ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 0xcU)) & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							   >> 0xdU))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					>> 0xeU)) & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							     >> 0xfU)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3551) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3562)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3539) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3566)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3511) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3570))) 
		  | ((((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				    >> 0x10U)) & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							  >> 0x11U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 0x12U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							    >> 0x13U)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3588) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3599))) 
			| ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 0x14U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							    >> 0x15U))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					>> 0x16U)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					  >> 0x17U)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3615) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3626)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3603) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3630))) 
		      | ((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
				      >> 0x18U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
							    >> 0x19U))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					>> 0x1aU)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					  >> 0x1bU)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3647) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3658))) 
			  | ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					>> 0x1cU)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					  >> 0x1dU))) 
			      | (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					   >> 0x1fU)) 
				  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 0x20U))) 
				 | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
					     >> 0x1eU)) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3689)))) 
			     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3674) 
				& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3693)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3662) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3697)))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3634) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3701)))) 
		 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3511) 
		     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3570)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3634) 
		       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3701)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_ar_bits_user 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_user___05FT_55_data)
	      : 0U) << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_382));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_365 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241)) 
				  + (QData)((IData)(
						    (0xffffU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_363) 
							<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_239 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_234) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_234)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_44)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_16)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_aw_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_63));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_aw_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_ar_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_15));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_ar_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1221 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1152) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1166)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1299 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1253) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1004)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_327)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_deq 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1253) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1002)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1168 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1253) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1002)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)));
    __Vtemp1974[0U] = ((0xfffffffeU & ((IData)(((1U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_opcode))
						 ? 
						(((QData)((IData)(
								  ((((((0x80000000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3fU)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3fU))))) 
									   << 0x1fU)) 
								       | (0x40000000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3eU)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3eU))))) 
									     << 0x1eU))) 
								      | ((0x20000000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3dU)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3dU))))) 
									     << 0x1dU)) 
									 | (0x10000000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3cU))))) 
									       << 0x1cU)))) 
								     | (((0x8000000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3bU)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3bU))))) 
									     << 0x1bU)) 
									 | (0x4000000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3aU))))) 
									       << 0x1aU))) 
									| ((0x2000000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x39U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x39U))))) 
									       << 0x19U)) 
									   | (0x1000000U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x38U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x38U))))) 
										<< 0x18U))))) 
								    | ((((0x800000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x37U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x37U))))) 
									     << 0x17U)) 
									 | (0x400000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x36U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x36U))))) 
									       << 0x16U))) 
									| ((0x200000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x35U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x35U))))) 
									       << 0x15U)) 
									   | (0x100000U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x34U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x34U))))) 
										<< 0x14U)))) 
								       | (((0x80000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x33U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x33U))))) 
									       << 0x13U)) 
									   | (0x40000U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x32U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x32U))))) 
										<< 0x12U))) 
									  | ((0x20000U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x31U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x31U))))) 
										<< 0x11U)) 
									     | (0x10000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x30U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x30U))))) 
										<< 0x10U)))))) 
								   | (((((0x8000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2fU)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2fU))))) 
									     << 0xfU)) 
									 | (0x4000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2eU))))) 
									       << 0xeU))) 
									| ((0x2000U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2dU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2dU))))) 
									       << 0xdU)) 
									   | (0x1000U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2cU))))) 
										<< 0xcU)))) 
								       | (((0x800U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2bU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2bU))))) 
									       << 0xbU)) 
									   | (0x400U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2aU))))) 
										<< 0xaU))) 
									  | ((0x200U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x29U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x29U))))) 
										<< 9U)) 
									     | (0x100U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x28U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x28U))))) 
										<< 8U))))) 
								      | ((((0x80U 
									    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x27U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x27U))))) 
									       << 7U)) 
									   | (0x40U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x26U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x26U))))) 
										<< 6U))) 
									  | ((0x20U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x25U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x25U))))) 
										<< 5U)) 
									     | (0x10U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x24U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x24U))))) 
										<< 4U)))) 
									 | (((8U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x23U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x23U))))) 
										<< 3U)) 
									     | (4U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x22U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x22U))))) 
										<< 2U))) 
									    | ((2U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x21U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x21U))))) 
										<< 1U)) 
									       | (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x20U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x20U))))))))))))) 
						  << 0x20U) 
						 | (QData)((IData)(
								   ((((((0x80000000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1fU)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1fU))))) 
									    << 0x1fU)) 
									| (0x40000000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1eU))))) 
									      << 0x1eU))) 
								       | ((0x20000000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1dU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1dU))))) 
									      << 0x1dU)) 
									  | (0x10000000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1cU))))) 
										<< 0x1cU)))) 
								      | (((0x8000000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1bU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1bU))))) 
									      << 0x1bU)) 
									  | (0x4000000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1aU))))) 
										<< 0x1aU))) 
									 | ((0x2000000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x19U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x19U))))) 
										<< 0x19U)) 
									    | (0x1000000U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x18U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x18U))))) 
										<< 0x18U))))) 
								     | ((((0x800000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x17U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x17U))))) 
									      << 0x17U)) 
									  | (0x400000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x16U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x16U))))) 
										<< 0x16U))) 
									 | ((0x200000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x15U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x15U))))) 
										<< 0x15U)) 
									    | (0x100000U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x14U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x14U))))) 
										<< 0x14U)))) 
									| (((0x80000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x13U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x13U))))) 
										<< 0x13U)) 
									    | (0x40000U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x12U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x12U))))) 
										<< 0x12U))) 
									   | ((0x20000U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x11U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x11U))))) 
										<< 0x11U)) 
									      | (0x10000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x10U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x10U))))) 
										<< 0x10U)))))) 
								    | (((((0x8000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xfU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xfU))))) 
									      << 0xfU)) 
									  | (0x4000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xeU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xeU))))) 
										<< 0xeU))) 
									 | ((0x2000U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xdU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xdU))))) 
										<< 0xdU)) 
									    | (0x1000U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xcU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xcU))))) 
										<< 0xcU)))) 
									| (((0x800U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xbU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xbU))))) 
										<< 0xbU)) 
									    | (0x400U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xaU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xaU))))) 
										<< 0xaU))) 
									   | ((0x200U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 9U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 9U))))) 
										<< 9U)) 
									      | (0x100U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 8U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 8U))))) 
										<< 8U))))) 
								       | ((((0x80U 
									     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 7U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 7U))))) 
										<< 7U)) 
									    | (0x40U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 6U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 6U))))) 
										<< 6U))) 
									   | ((0x20U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 5U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 5U))))) 
										<< 5U)) 
									      | (0x10U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 4U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 4U))))) 
										<< 4U)))) 
									  | (((8U 
									       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 3U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 3U))))) 
										<< 3U)) 
									      | (4U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 2U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 2U))))) 
										<< 2U))) 
									     | ((2U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 1U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 1U))))) 
										<< 1U)) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data) 
										<< 1U)) 
										| (1U 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))))))))))))
						 : 
						((4U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param))
						  ? 
						 (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[0U])))
						  : 
						 (((1U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param)) 
						   == 
						   (1U 
						    & (((1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								    >> 0x3fU))) 
							== 
							(1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977 
								    >> 0x3fU))))
						        ? 
						       (~ 
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U] 
							 >> 0x1fU))
						        : 
						       ((1U 
							 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param) 
							    >> 1U)) 
							== 
							(1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								    >> 0x3fU)))))))
						   ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data
						   : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))) 
				       << 1U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_corrupt) 
						  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_corrupt)));
    __Vtemp1974[1U] = ((1U & ((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_opcode))
				        ? (((QData)((IData)(
							    ((((((0x80000000U 
								  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
								      >> 
								      ((2U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3fU)) 
									   << 1U)) 
								       | (1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3fU))))) 
								     << 0x1fU)) 
								 | (0x40000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3eU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3eU))))) 
								       << 0x1eU))) 
								| ((0x20000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3dU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3dU))))) 
								       << 0x1dU)) 
								   | (0x10000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3cU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3cU))))) 
									 << 0x1cU)))) 
							       | (((0x8000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3bU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3bU))))) 
								       << 0x1bU)) 
								   | (0x4000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3aU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3aU))))) 
									 << 0x1aU))) 
								  | ((0x2000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x39U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x39U))))) 
									 << 0x19U)) 
								     | (0x1000000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x38U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x38U))))) 
									   << 0x18U))))) 
							      | ((((0x800000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x37U)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x37U))))) 
								       << 0x17U)) 
								   | (0x400000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x36U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x36U))))) 
									 << 0x16U))) 
								  | ((0x200000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x35U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x35U))))) 
									 << 0x15U)) 
								     | (0x100000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x34U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x34U))))) 
									   << 0x14U)))) 
								 | (((0x80000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x33U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x33U))))) 
									 << 0x13U)) 
								     | (0x40000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x32U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x32U))))) 
									   << 0x12U))) 
								    | ((0x20000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x31U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x31U))))) 
									   << 0x11U)) 
								       | (0x10000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x30U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x30U))))) 
									     << 0x10U)))))) 
							     | (((((0x8000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2fU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2fU))))) 
								       << 0xfU)) 
								   | (0x4000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2eU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2eU))))) 
									 << 0xeU))) 
								  | ((0x2000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2dU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2dU))))) 
									 << 0xdU)) 
								     | (0x1000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2cU)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2cU))))) 
									   << 0xcU)))) 
								 | (((0x800U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2bU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2bU))))) 
									 << 0xbU)) 
								     | (0x400U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2aU)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2aU))))) 
									   << 0xaU))) 
								    | ((0x200U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x29U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x29U))))) 
									   << 9U)) 
								       | (0x100U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x28U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x28U))))) 
									     << 8U))))) 
								| ((((0x80U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x27U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x27U))))) 
									 << 7U)) 
								     | (0x40U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x26U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x26U))))) 
									   << 6U))) 
								    | ((0x20U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x25U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x25U))))) 
									   << 5U)) 
								       | (0x10U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x24U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x24U))))) 
									     << 4U)))) 
								   | (((8U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x23U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x23U))))) 
									   << 3U)) 
								       | (4U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x22U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x22U))))) 
									     << 2U))) 
								      | ((2U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x21U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x21U))))) 
									     << 1U)) 
									 | (1U 
									    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x20U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x20U))))))))))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((((((0x80000000U 
								   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
								       >> 
								       ((2U 
									 & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1fU)) 
									    << 1U)) 
									| (1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1fU))))) 
								      << 0x1fU)) 
								  | (0x40000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1eU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1eU))))) 
									<< 0x1eU))) 
								 | ((0x20000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1dU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1dU))))) 
									<< 0x1dU)) 
								    | (0x10000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1cU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1cU))))) 
									  << 0x1cU)))) 
								| (((0x8000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1bU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1bU))))) 
									<< 0x1bU)) 
								    | (0x4000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1aU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1aU))))) 
									  << 0x1aU))) 
								   | ((0x2000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x19U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x19U))))) 
									  << 0x19U)) 
								      | (0x1000000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x18U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x18U))))) 
									    << 0x18U))))) 
							       | ((((0x800000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x17U)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x17U))))) 
									<< 0x17U)) 
								    | (0x400000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x16U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x16U))))) 
									  << 0x16U))) 
								   | ((0x200000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x15U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x15U))))) 
									  << 0x15U)) 
								      | (0x100000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x14U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x14U))))) 
									    << 0x14U)))) 
								  | (((0x80000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x13U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x13U))))) 
									  << 0x13U)) 
								      | (0x40000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x12U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x12U))))) 
									    << 0x12U))) 
								     | ((0x20000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x11U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x11U))))) 
									    << 0x11U)) 
									| (0x10000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x10U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x10U))))) 
									      << 0x10U)))))) 
							      | (((((0x8000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xfU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xfU))))) 
									<< 0xfU)) 
								    | (0x4000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xeU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xeU))))) 
									  << 0xeU))) 
								   | ((0x2000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xdU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xdU))))) 
									  << 0xdU)) 
								      | (0x1000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xcU)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xcU))))) 
									    << 0xcU)))) 
								  | (((0x800U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xbU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xbU))))) 
									  << 0xbU)) 
								      | (0x400U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xaU)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xaU))))) 
									    << 0xaU))) 
								     | ((0x200U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 9U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 9U))))) 
									    << 9U)) 
									| (0x100U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 8U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 8U))))) 
									      << 8U))))) 
								 | ((((0x80U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 7U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 7U))))) 
									  << 7U)) 
								      | (0x40U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 6U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 6U))))) 
									    << 6U))) 
								     | ((0x20U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 5U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 5U))))) 
									    << 5U)) 
									| (0x10U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 4U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 4U))))) 
									      << 4U)))) 
								    | (((8U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 3U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 3U))))) 
									    << 3U)) 
									| (4U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 2U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 2U))))) 
									      << 2U))) 
								       | ((2U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 1U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 1U))))) 
									      << 1U)) 
									  | (1U 
									     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data) 
										<< 1U)) 
										| (1U 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))))))))))))
				        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param))
					    ? (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[0U])))
					    : (((1U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param)) 
						== 
						(1U 
						 & (((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								 >> 0x3fU))) 
						     == 
						     (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977 
								 >> 0x3fU))))
						     ? 
						    (~ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U] 
						      >> 0x1fU))
						     : 
						    ((1U 
						      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param) 
							 >> 1U)) 
						     == 
						     (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								 >> 0x3fU)))))))
					        ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data
					        : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))) 
			      >> 0x1fU)) | (0xfffffffeU 
					    & ((IData)(
						       (((1U 
							  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_opcode))
							  ? 
							 (((QData)((IData)(
									   ((((((0x80000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3fU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3fU))))) 
										<< 0x1fU)) 
										| (0x40000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3eU))))) 
										<< 0x1eU))) 
									       | ((0x20000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3dU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3dU))))) 
										<< 0x1dU)) 
										| (0x10000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3cU))))) 
										<< 0x1cU)))) 
									      | (((0x8000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3bU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3bU))))) 
										<< 0x1bU)) 
										| (0x4000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3aU))))) 
										<< 0x1aU))) 
										| ((0x2000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x39U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x39U))))) 
										<< 0x19U)) 
										| (0x1000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x38U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x38U))))) 
										<< 0x18U))))) 
									     | ((((0x800000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x37U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x37U))))) 
										<< 0x17U)) 
										| (0x400000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x36U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x36U))))) 
										<< 0x16U))) 
										| ((0x200000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x35U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x35U))))) 
										<< 0x15U)) 
										| (0x100000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x34U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x34U))))) 
										<< 0x14U)))) 
										| (((0x80000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x33U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x33U))))) 
										<< 0x13U)) 
										| (0x40000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x32U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x32U))))) 
										<< 0x12U))) 
										| ((0x20000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x31U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x31U))))) 
										<< 0x11U)) 
										| (0x10000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x30U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x30U))))) 
										<< 0x10U)))))) 
									    | (((((0x8000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2fU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2fU))))) 
										<< 0xfU)) 
										| (0x4000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2eU))))) 
										<< 0xeU))) 
										| ((0x2000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2dU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2dU))))) 
										<< 0xdU)) 
										| (0x1000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2cU))))) 
										<< 0xcU)))) 
										| (((0x800U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2bU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2bU))))) 
										<< 0xbU)) 
										| (0x400U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2aU))))) 
										<< 0xaU))) 
										| ((0x200U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x29U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x29U))))) 
										<< 9U)) 
										| (0x100U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x28U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x28U))))) 
										<< 8U))))) 
									       | ((((0x80U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x27U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x27U))))) 
										<< 7U)) 
										| (0x40U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x26U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x26U))))) 
										<< 6U))) 
										| ((0x20U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x25U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x25U))))) 
										<< 5U)) 
										| (0x10U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x24U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x24U))))) 
										<< 4U)))) 
										| (((8U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x23U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x23U))))) 
										<< 3U)) 
										| (4U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x22U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x22U))))) 
										<< 2U))) 
										| ((2U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x21U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x21U))))) 
										<< 1U)) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x20U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x20U))))))))))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((((((0x80000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1fU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1fU))))) 
										<< 0x1fU)) 
										| (0x40000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1eU))))) 
										<< 0x1eU))) 
										| ((0x20000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1dU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1dU))))) 
										<< 0x1dU)) 
										| (0x10000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1cU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1cU))))) 
										<< 0x1cU)))) 
									       | (((0x8000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1bU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1bU))))) 
										<< 0x1bU)) 
										| (0x4000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1aU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1aU))))) 
										<< 0x1aU))) 
										| ((0x2000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x19U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x19U))))) 
										<< 0x19U)) 
										| (0x1000000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x18U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x18U))))) 
										<< 0x18U))))) 
									      | ((((0x800000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x17U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x17U))))) 
										<< 0x17U)) 
										| (0x400000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x16U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x16U))))) 
										<< 0x16U))) 
										| ((0x200000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x15U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x15U))))) 
										<< 0x15U)) 
										| (0x100000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x14U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x14U))))) 
										<< 0x14U)))) 
										| (((0x80000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x13U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x13U))))) 
										<< 0x13U)) 
										| (0x40000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x12U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x12U))))) 
										<< 0x12U))) 
										| ((0x20000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x11U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x11U))))) 
										<< 0x11U)) 
										| (0x10000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x10U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x10U))))) 
										<< 0x10U)))))) 
									     | (((((0x8000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xfU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xfU))))) 
										<< 0xfU)) 
										| (0x4000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xeU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xeU))))) 
										<< 0xeU))) 
										| ((0x2000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xdU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xdU))))) 
										<< 0xdU)) 
										| (0x1000U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xcU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xcU))))) 
										<< 0xcU)))) 
										| (((0x800U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xbU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xbU))))) 
										<< 0xbU)) 
										| (0x400U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xaU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xaU))))) 
										<< 0xaU))) 
										| ((0x200U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 9U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 9U))))) 
										<< 9U)) 
										| (0x100U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 8U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 8U))))) 
										<< 8U))))) 
										| ((((0x80U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 7U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 7U))))) 
										<< 7U)) 
										| (0x40U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 6U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 6U))))) 
										<< 6U))) 
										| ((0x20U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 5U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 5U))))) 
										<< 5U)) 
										| (0x10U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 4U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 4U))))) 
										<< 4U)))) 
										| (((8U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 3U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 3U))))) 
										<< 3U)) 
										| (4U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 2U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 2U))))) 
										<< 2U))) 
										| ((2U 
										& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 1U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 1U))))) 
										<< 1U)) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data) 
										<< 1U)) 
										| (1U 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))))))))))))
							  : 
							 ((4U 
							   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param))
							   ? 
							  (((QData)((IData)(
									    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U])) 
							    << 0x20U) 
							   | (QData)((IData)(
									     vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[0U])))
							   : 
							  (((1U 
							     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param)) 
							    == 
							    (1U 
							     & (((1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
									     >> 0x3fU))) 
								 == 
								 (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977 
									     >> 0x3fU))))
								 ? 
								(~ 
								 (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U] 
								  >> 0x1fU))
								 : 
								((1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param) 
								     >> 1U)) 
								 == 
								 (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
									     >> 0x3fU)))))))
							    ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data
							    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data))) 
							>> 0x20U)) 
					       << 1U)));
    __Vtemp1974[2U] = (1U & ((IData)((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_opcode))
				        ? (((QData)((IData)(
							    ((((((0x80000000U 
								  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
								      >> 
								      ((2U 
									& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3fU)) 
									   << 1U)) 
								       | (1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3fU))))) 
								     << 0x1fU)) 
								 | (0x40000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3eU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3eU))))) 
								       << 0x1eU))) 
								| ((0x20000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3dU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3dU))))) 
								       << 0x1dU)) 
								   | (0x10000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3cU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3cU))))) 
									 << 0x1cU)))) 
							       | (((0x8000000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3bU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3bU))))) 
								       << 0x1bU)) 
								   | (0x4000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x3aU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x3aU))))) 
									 << 0x1aU))) 
								  | ((0x2000000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x39U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x39U))))) 
									 << 0x19U)) 
								     | (0x1000000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x38U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x38U))))) 
									   << 0x18U))))) 
							      | ((((0x800000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x37U)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x37U))))) 
								       << 0x17U)) 
								   | (0x400000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x36U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x36U))))) 
									 << 0x16U))) 
								  | ((0x200000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x35U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x35U))))) 
									 << 0x15U)) 
								     | (0x100000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x34U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x34U))))) 
									   << 0x14U)))) 
								 | (((0x80000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x33U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x33U))))) 
									 << 0x13U)) 
								     | (0x40000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x32U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x32U))))) 
									   << 0x12U))) 
								    | ((0x20000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x31U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x31U))))) 
									   << 0x11U)) 
								       | (0x10000U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x30U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x30U))))) 
									     << 0x10U)))))) 
							     | (((((0x8000U 
								    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									>> 
									((2U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2fU)) 
									     << 1U)) 
									 | (1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2fU))))) 
								       << 0xfU)) 
								   | (0x4000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2eU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2eU))))) 
									 << 0xeU))) 
								  | ((0x2000U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2dU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2dU))))) 
									 << 0xdU)) 
								     | (0x1000U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2cU)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2cU))))) 
									   << 0xcU)))) 
								 | (((0x800U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2bU)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2bU))))) 
									 << 0xbU)) 
								     | (0x400U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x2aU)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x2aU))))) 
									   << 0xaU))) 
								    | ((0x200U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x29U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x29U))))) 
									   << 9U)) 
								       | (0x100U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x28U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x28U))))) 
									     << 8U))))) 
								| ((((0x80U 
								      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									  >> 
									  ((2U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x27U)) 
									       << 1U)) 
									   | (1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x27U))))) 
									 << 7U)) 
								     | (0x40U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x26U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x26U))))) 
									   << 6U))) 
								    | ((0x20U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x25U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x25U))))) 
									   << 5U)) 
								       | (0x10U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x24U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x24U))))) 
									     << 4U)))) 
								   | (((8U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									    >> 
									    ((2U 
									      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x23U)) 
										<< 1U)) 
									     | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x23U))))) 
									   << 3U)) 
								       | (4U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x22U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x22U))))) 
									     << 2U))) 
								      | ((2U 
									  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									      >> 
									      ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x21U)) 
										<< 1U)) 
									       | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x21U))))) 
									     << 1U)) 
									 | (1U 
									    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x20U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x20U))))))))))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((((((0x80000000U 
								   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
								       >> 
								       ((2U 
									 & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1fU)) 
									    << 1U)) 
									| (1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1fU))))) 
								      << 0x1fU)) 
								  | (0x40000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1eU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1eU))))) 
									<< 0x1eU))) 
								 | ((0x20000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1dU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1dU))))) 
									<< 0x1dU)) 
								    | (0x10000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1cU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1cU))))) 
									  << 0x1cU)))) 
								| (((0x8000000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1bU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1bU))))) 
									<< 0x1bU)) 
								    | (0x4000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x1aU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x1aU))))) 
									  << 0x1aU))) 
								   | ((0x2000000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x19U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x19U))))) 
									  << 0x19U)) 
								      | (0x1000000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x18U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x18U))))) 
									    << 0x18U))))) 
							       | ((((0x800000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x17U)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x17U))))) 
									<< 0x17U)) 
								    | (0x400000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x16U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x16U))))) 
									  << 0x16U))) 
								   | ((0x200000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x15U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x15U))))) 
									  << 0x15U)) 
								      | (0x100000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x14U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x14U))))) 
									    << 0x14U)))) 
								  | (((0x80000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x13U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x13U))))) 
									  << 0x13U)) 
								      | (0x40000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x12U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x12U))))) 
									    << 0x12U))) 
								     | ((0x20000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x11U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x11U))))) 
									    << 0x11U)) 
									| (0x10000U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0x10U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0x10U))))) 
									      << 0x10U)))))) 
							      | (((((0x8000U 
								     & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									 >> 
									 ((2U 
									   & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xfU)) 
									      << 1U)) 
									  | (1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xfU))))) 
									<< 0xfU)) 
								    | (0x4000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xeU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xeU))))) 
									  << 0xeU))) 
								   | ((0x2000U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xdU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xdU))))) 
									  << 0xdU)) 
								      | (0x1000U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xcU)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xcU))))) 
									    << 0xcU)))) 
								  | (((0x800U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xbU)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xbU))))) 
									  << 0xbU)) 
								      | (0x400U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 0xaU)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 0xaU))))) 
									    << 0xaU))) 
								     | ((0x200U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 9U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 9U))))) 
									    << 9U)) 
									| (0x100U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 8U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 8U))))) 
									      << 8U))))) 
								 | ((((0x80U 
								       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									   >> 
									   ((2U 
									     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 7U)) 
										<< 1U)) 
									    | (1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 7U))))) 
									  << 7U)) 
								      | (0x40U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 6U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 6U))))) 
									    << 6U))) 
								     | ((0x20U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 5U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 5U))))) 
									    << 5U)) 
									| (0x10U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 4U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 4U))))) 
									      << 4U)))) 
								    | (((8U 
									 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									     >> 
									     ((2U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 3U)) 
										<< 1U)) 
									      | (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 3U))))) 
									    << 3U)) 
									| (4U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 2U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 2U))))) 
									      << 2U))) 
								       | ((2U 
									   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
									       >> 
									       ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
										>> 1U)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
										>> 1U))))) 
									      << 1U)) 
									  | (1U 
									     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut) 
										>> 
										((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data) 
										<< 1U)) 
										| (1U 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data)))))))))))))
				        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param))
					    ? (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[0U])))
					    : (((1U 
						 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param)) 
						== 
						(1U 
						 & (((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								 >> 0x3fU))) 
						     == 
						     (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_977 
								 >> 0x3fU))))
						     ? 
						    (~ 
						     (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_980[1U] 
						      >> 0x1fU))
						     : 
						    ((1U 
						      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param) 
							 >> 1U)) 
						     == 
						     (1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_975 
								 >> 0x3fU)))))))
					        ? vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data
					        : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data))) 
				      >> 0x20U)) >> 0x1fU));
    __Vtemp1975[2U] = ((0xfffffffeU & ((IData)((((QData)((IData)(
								 ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
								   << 4U) 
								  | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
									   & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								       << 3U) 
								      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
									  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
									     & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
									 << 2U)) 
								     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
									  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
									     & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
									 << 1U) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
									   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
									      & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)))))))) 
						 << 4U) 
						| (QData)((IData)(
								  (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
								      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
									 & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								     << 3U) 
								    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
									   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
								       << 2U)) 
								   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
									   & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								       << 1U) 
								      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
									 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
									    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))))))))) 
				       << 1U)) | __Vtemp1974[2U]);
    __Vtemp1975[3U] = ((1U & ((IData)((((QData)((IData)(
							((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
							  << 4U) 
							 | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
							       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
								  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
							      << 3U) 
							     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
								 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
								    & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
								<< 2U)) 
							    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
								 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
								    & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								<< 1U) 
							       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
								  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
								     & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)))))))) 
					<< 4U) | (QData)((IData)(
								 (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
								     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
									& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								    << 3U) 
								   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
								       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
									  & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
								      << 2U)) 
								  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
								       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
									  & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
								      << 1U) 
								     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
									   & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))))))))) 
			      >> 0x1fU)) | (0xfffffffeU 
					    & ((IData)(
						       ((((QData)((IData)(
									  ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
									    << 4U) 
									   | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
										& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
										<< 3U) 
									       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1091) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1089) 
										& (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
										<< 2U)) 
									      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
										& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
										<< 1U) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1088) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1086) 
										& (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)))))))) 
							  << 4U) 
							 | (QData)((IData)(
									   (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
									       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
										& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
									      << 3U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1085) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1083) 
										& (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address))) 
										<< 2U)) 
									    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
										& vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)) 
										<< 1U) 
									       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1082) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1080) 
										& (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address)))))))) 
							>> 0x20U)) 
					       << 1U)));
    __Vtemp1986[3U] = ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0))
			 ? ((0xffffffe0U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size) 
					     << 0xaU) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_source) 
					       << 5U))) 
			    | __Vtemp1975[3U]) : 0U) 
		       | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163)
			    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1))
			   ? ((0xffffffe0U & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_327)
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)
						  : 4U) 
						<< 0x10U) 
					       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_327)
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)
						    : 0U) 
						  << 0xdU)) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
						  << 0xaU) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
						    << 5U)))) 
			      | ((1U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
						  << 8U) 
						 | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
							      << 8U) 
							     | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data))) 
							    >> 0x20U)) 
						   << 1U))))
			   : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0))
	     ? __Vtemp1974[0U] : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
					  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163)
					  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1))
					 ? ((0xfffffffeU 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
						<< 1U)) 
					    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data))
					 : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0))
	     ? __Vtemp1974[1U] : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
					  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163)
					  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1))
					 ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
						   >> 0x1fU)) 
					    | (0xfffffffeU 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
							   >> 0x20U)) 
						  << 1U)))
					 : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1162)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_0))
	     ? __Vtemp1975[2U] : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1141))
					  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1163)
					  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1225_1))
					 ? ((0xfffffffeU 
					     & ((IData)(
							(((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
							  << 8U) 
							 | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
						<< 1U)) 
					    | (1U & 
					       ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
							 >> 0x20U)) 
						>> 0x1fU)))
					 : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
	= __Vtemp1986[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
	= (((QData)((IData)(((0x55555555U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_496 
					     >> 1U)) 
			     | (0xaaaaaaaaU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_496 
					       << 1U))))) 
	    << 0x17U) | (QData)((IData)((((0x2aaa80U 
					   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_539) 
					      << 6U)) 
					  | (0x555500U 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_539) 
						<< 8U))) 
					 | ((0x40U 
					     & ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							 >> 0x30U)) 
						<< 6U)) 
					    | ((0x20U 
						& ((IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							    >> 0x31U)) 
						   << 5U)) 
					       | ((0x10U 
						   & ((IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							       >> 0x32U)) 
						      << 4U)) 
						  | ((8U 
						      & ((IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								  >> 0x33U)) 
							 << 3U)) 
						     | ((4U 
							 & ((IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								     >> 0x34U)) 
							    << 2U)) 
							| ((2U 
							    & ((IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									>> 0x35U)) 
							       << 1U)) 
							   | (1U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									 >> 0x36U)))))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___T_49 
	= (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)
	     ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41)
	     : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full) 
	       & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_521 
	= (((QData)((IData)(((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
					     >> 0x1fU)) 
				    << 3U)) | (7U & 
					       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_492)
						  ? 0U
						  : 
						 (7U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_490) 
						     >> 6U))) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_490) 
							>> 7U))) 
						   & (0U 
						      != 
						      (0x7fffffU 
						       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29))))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_490) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							    >> 0x17U))))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29)))) 
								  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_478)))) 
						      << 1U))
					        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_310 
	= (0x1fffU & ((0xfffU & ((0U == (0x7ffU & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							   >> 0x34U))))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_298))
				  : (0x7ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
						       >> 0x34U))))) 
		      + (0x400U | ((0U == (0x7ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							     >> 0x34U))))
				    ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_164 
	= (0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_139) 
			   & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_132)) 
			  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_138)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123)))) 
			     & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
				     & (0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_132)) 
				    & (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_135))
				    ? (1U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
						    & (~ 
						       (3U 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_123 
							   << 2U)))) 
						   >> 2U)) 
					       | (((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_138))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_131 
						   >> 1U)
						   : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208 
	= ((VL_ULL(0) != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202) 
	   | (VL_ULL(0) != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_803 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_792) 
		      | (0x1ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_792) 
				     << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_351 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_intExceptionFlags) 
		  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__invalidExc)) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_overflow))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_890 
	= (0xfU & ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_884) 
			   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_884) 
					   >> 2U)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_881) 
		      << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_user 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_user___05FT_55_data)
	      : 0U) << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_553));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_536 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418)) 
				  + (QData)((IData)(
						    (0xffffU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_534) 
							<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_604 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_599))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_595)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_534)
	        : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_599));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_571 
	= (0xffffU & ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_563 
					>> 7U))) & 
		      (~ (0x7fffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_563 
				     >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_807) 
		    | (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_807) 
				 << 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3135 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3108));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1833 
	= ((VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(
							       (0x2000U 
								^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130))
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1890 
	= ((VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(
							       (0x2000U 
								^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130) 
			>> 1U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3150 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1824));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3151 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3130) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1881));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2951 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2946)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2924));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2966 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2946)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1823));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2967 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2946) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1880));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2437 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2432)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2410));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2432)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1821));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2453 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2432) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1878));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2621 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2616)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2594));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2636 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2616)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1822));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2637 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2616) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1879));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_603 
	= ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_589) 
		     << 1U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_453));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_604 
	= ((~ (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_589))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_309));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_413 
	= (1U & (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
			   >> 1U)) | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
					      >> 2U))) 
		 | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
			    >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_419 
	= ((0U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)) 
	   & (0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
				       >> 0x13U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_426 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)) 
	   & (0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data 
				       >> 0xaU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
	   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv);
    VL_EXTEND_WQ(65,64, __Vtemp1988, (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
				      + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv));
    VL_EXTEND_WI(65,1, __Vtemp1989, (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
					   >> 3U)));
    VL_ADD_W(3, __Vtemp1990, __Vtemp1988, __Vtemp1989);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_16[0U] 
	= __Vtemp1990[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_16[1U] 
	= __Vtemp1990[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_16[2U] 
	= (1U & __Vtemp1990[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_66 
	= ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__shin_r 
			    >> 0x20U))) | (VL_ULL(0xffffffff00000000) 
					   & ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__shin_r)) 
					      << 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__delegate 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
	   & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause 
			     >> 0x3fU))) ? (IData)(
						   ((0x3fU 
						     >= 
						     (0xffU 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
						     ? 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg 
						     >> 
						     (0xffU 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
						     : VL_ULL(0)))
	       : (IData)(((0x3fU >= (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
			   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_medeleg 
			      >> (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
			   : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt 
	= ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause 
		    >> 0x3fU)) & (0xeU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger 
	= ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause 
		       >> 0x3fU))) & (0xeU == (0xffU 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4042 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4030 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
	   & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1522 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state) 
	      != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_grow_param)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__doUncachedResp) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_store_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_sc_fail)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1517 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_miss) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_miss) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
			    << 0x1eU) | (0x3ffffffeU 
					 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
					    >> 2U)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
	       ? ((0U == (7U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U]))) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_236)))
	       : ((0U != (7U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_236)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
		  >> 2U)) | (6U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
				   >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0x1bU) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0x1bU) : 
				     ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0x1bU)
				       : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      >> 0x1bU)
					   : ((0x1bU 
					       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 0x1bU)
					       : ((0x1aU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0x1bU)
						   : 
						  ((0x19U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 0x1bU)
						    : 
						   ((0x18U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 0x1bU)
						     : 
						    ((0x17U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						      ? 
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 0x1bU)
						      : 
						     ((0x16U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						       ? 
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 0x1bU)
						       : 
						      ((0x15U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						        ? 
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 0x1bU)
						        : 
						       ((0x14U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 0x1bU)
							 : 
							((0x13U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 0x1bU)
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							   ? 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 0x1bU)
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 0x1bU)
							    : 
							   ((0x10U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							     ? 
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							     >> 0x1bU)
							     : 
							    ((0xfU 
							      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							      ? 
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      >> 0x1bU)
							      : 
							     ((0xeU 
							       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							       ? 
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							       >> 0x1bU)
							       : 
							      ((0xdU 
								== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							        ? 
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								>> 0x1bU)
							        : 
							       ((0xcU 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								 ? 
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								 >> 0x1bU)
								 : 
								((0xbU 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								  ? 
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								  >> 0x1bU)
								  : 
								 ((0xaU 
								   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								   ? 
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   >> 0x1bU)
								   : 
								  ((9U 
								    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								    ? 
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 0x1bU)
								    : 
								   ((8U 
								     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								     ? 
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								     >> 0x1bU)
								     : 
								    ((7U 
								      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								      ? 
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 0x1bU)
								      : 
								     ((6U 
								       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								       ? 
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								       >> 0x1bU)
								       : 
								      ((5U 
									== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								        ? 
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									>> 0x1bU)
								        : 
								       ((4U 
									 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									 ? 
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 >> 0x1bU)
									 : 
									((3U 
									  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									  ? 
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									  >> 0x1bU)
									  : 
									 ((2U 
									   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									   ? 
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									   >> 0x1bU)
									   : 
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									   >> 0x1bU))))))))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0xfU) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					>> 0xfU) : 
				    ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0xfU) : 
				     ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0xfU) : 
				      ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					   >> 0xfU)
				        : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       >> 0xfU)
					    : ((0x19U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0xfU)
					        : (
						   (0x18U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 0xfU)
						    : 
						   ((0x17U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 2U
						     : 
						    ((0x16U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						      ? 2U
						      : 
						     ((0x15U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						       ? 2U
						       : 
						      ((0x14U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						        ? 
						       ((0x1000U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 7U)
							 : 
							((0U 
							  != 
							  (0x1fU 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      >> 2U)))
							  ? 0U
							  : 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 7U)))
						        : 
						       ((0x13U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							 ? 2U
							 : 
							((0x12U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							  ? 2U
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							   ? 2U
							   : 
							  ((0x10U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)
							    : 
							   ((0xfU 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							     ? 
							    (8U 
							     | (7U 
								& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   >> 7U)))
							     : 
							    ((0xeU 
							      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							      ? 
							     (8U 
							      | (7U 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 7U)))
							      : 
							     ((0xdU 
							       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							       ? 
							      (8U 
							       | (7U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								     >> 7U)))
							       : 
							      ((0xcU 
								== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							        ? 
							       (8U 
								| (7U 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 7U)))
							        : 
							       ((0xbU 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								 ? 
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								 >> 7U)
								 : 
								((0xaU 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								  ? 0U
								  : 
								 ((9U 
								   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								   ? 
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   >> 7U)
								   : 
								  ((8U 
								    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								    ? 
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 7U)
								    : 
								   ((7U 
								     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								     ? 
								    (8U 
								     | (7U 
									& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									   >> 7U)))
								     : 
								    ((6U 
								      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								      ? 
								     (8U 
								      | (7U 
									 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									    >> 7U)))
								      : 
								     ((5U 
								       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								       ? 
								      (8U 
								       | (7U 
									  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									     >> 7U)))
								       : 
								      ((4U 
									== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								        ? 
								       (8U 
									| (7U 
									   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									      >> 7U)))
								        : 
								       ((3U 
									 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									 ? 
									(8U 
									 | (7U 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									       >> 7U)))
									 : 
									((2U 
									  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									  ? 
									 (8U 
									  | (7U 
									     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										>> 7U)))
									  : 
									 ((1U 
									   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
									   ? 
									  (8U 
									   | (7U 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										>> 7U)))
									   : 2U))))))))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1173_rd 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
	    ? (8U | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			   >> 2U))) : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				        ? (8U | (7U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 2U)))
				        : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					    ? (8U | 
					       (7U 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 2U)))
					    : ((4U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					        ? (8U 
						   | (7U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 2U)))
					        : (
						   (3U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (8U 
						    | (7U 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 2U)))
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 
						    (8U 
						     | (7U 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))
						     : 
						    (8U 
						     | (7U 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_159 
	= (0x108U | (((0xc00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_78) 
				 << 5U)) | (0xe0U & 
					    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					     << 3U))) 
		     | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_300 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294) 
	    << 5U) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			       >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_459 
	= (0x45413U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_447) 
			 << 0x14U) | (0x38000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  << 8U))) 
		       | (0x380U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_754 
	= (8U | ((0x10000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
			      << 4U)) | ((0xfc00U & 
					  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
					   << 5U)) 
					 | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1039 
	= ((0x1e0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1024) 
		      << 3U)) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_57 
	= (8U | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_46) 
		  << 8U) | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				  >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_196 
	= (0x108U | (((0x1c00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_46) 
				  << 8U)) | (0xe0U 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						<< 3U))) 
		     | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3407 
	= ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3395))
	    ? (~ (2U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
			   << 1U)))) : (2U | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
					      << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__multipleHits 
	= (1U & ((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits) 
			 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				    >> 1U))) | ((IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							 >> 2U)) 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							   >> 3U)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3465) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3476))) 
		      | ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				    >> 4U)) & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						       >> 5U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 6U)) & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							 >> 7U)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3492) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3503)))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3480) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3507))) 
		    | ((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				    >> 8U)) & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
						       >> 9U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 0xaU)) & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							   >> 0xbU)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3524) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3535))) 
			| ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 0xcU)) & (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							   >> 0xdU))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					>> 0xeU)) & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							     >> 0xfU)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3551) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3562)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3539) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3566)))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3511) 
		      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3570))) 
		  | ((((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				    >> 0x10U)) & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							  >> 0x11U))) 
			  | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 0x12U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							    >> 0x13U)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3588) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3599))) 
			| ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 0x14U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							    >> 0x15U))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					>> 0x16U)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					  >> 0x17U)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3615) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3626)))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3603) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3630))) 
		      | ((((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
				      >> 0x18U)) & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
							    >> 0x19U))) 
			    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					>> 0x1aU)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					  >> 0x1bU)))) 
			   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3647) 
			      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3658))) 
			  | ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					>> 0x1cU)) 
			       & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					  >> 0x1dU))) 
			      | (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					   >> 0x1fU)) 
				  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 0x20U))) 
				 | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
					     >> 0x1eU)) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3689)))) 
			     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3674) 
				& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3693)))) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3662) 
			    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3697)))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3634) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3701)))) 
		 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3511) 
		     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3570)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3634) 
		       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3701)))));
    VL_EXTEND_WQ(114,51, __Vtemp1997, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp1998, __Vtemp1997, 
		  (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
			    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_404[0U] 
	= __Vtemp1998[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_404[1U] 
	= __Vtemp1998[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_404[2U] 
	= __Vtemp1998[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_404[3U] 
	= (0x3ffffU & __Vtemp1998[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_499 
	= (0xfffffffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454))
			  ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_488) 
				| (0xffffU & ((IData)(1U) 
					      << (8U 
						  | (7U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
							>> 2U)))))))
			  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_488 
			     | (0xffffU & ((IData)(1U) 
					   << (8U | 
					       (7U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_454) 
						   >> 2U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_xcpt 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2727) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2728)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ldst_xcpt)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_80 
	= ((VL_ULL(0x5555555555555555) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_70 
					  >> 1U)) | 
	   (VL_ULL(0xaaaaaaaaaaaaaaaa) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_70 
					  << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_80 
	= ((VL_ULL(0x5555555555555555) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_70 
					  >> 1U)) | 
	   (VL_ULL(0xaaaaaaaaaaaaaaaa) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_70 
					  << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z)) 
		     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						   >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp)) 
		     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						   >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_234 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209) 
					 & (VL_ULL(0) 
					    != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
						   & (VL_ULL(0) 
						      != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202)) 
						  & (VL_ULL(0) 
						     == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
						       << 2U)))) 
					       >> 2U)) 
					   | (((5U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208))
					       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_31 
	= (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_taken)
			 ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bridx))
			 : 2U)) - (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
						 >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_306)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_247));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter_auto_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_245))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_306)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_247));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_305 
	= (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_292) 
			  >> 4U))) << 2U) | (((0U != 
					       (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_297) 
						   >> 2U))) 
					      << 1U) 
					     | (1U 
						& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_297) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_297) 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_305 
	= (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_292) 
			  >> 4U))) << 2U) | (((0U != 
					       (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_297) 
						   >> 2U))) 
					      << 1U) 
					     | (1U 
						& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_297) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_297) 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2031 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904) 
		   - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		      & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))
			  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2008)
			  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2119)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar_auto_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2008)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2119));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor_io_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2008)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2119));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1923 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1910) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1920))) 
	    << 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1910));
    VL_EXTEND_WQ(115,52, __Vtemp2001, (VL_ULL(0xfffffffffffff) 
				       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77));
    VL_SHIFTL_WWI(115,115,6, __Vtemp2002, __Vtemp2001, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_346));
    __Vtemp2004[1U] = ((0xe0000000U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_360)
					  ? 0U : (7U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_358) 
						     >> 9U))) 
					| ((3U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_358) 
						      >> 0xaU))) 
					   & (VL_ULL(0) 
					      != (VL_ULL(0xfffffffffffff) 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77)))) 
				       << 0x1dU)) | (IData)(
							    ((((QData)((IData)(
									       (0x1ffU 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_358)))) 
							       << 0x34U) 
							      | (VL_ULL(0xfffffffffffff) 
								 & ((0U 
								     == 
								     (0x7ffU 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
										>> 0x34U))))
								     ? 
								    (VL_ULL(0xffffffffffffe) 
								     & (((QData)((IData)(
										__Vtemp2002[1U])) 
									 << 0x21U) 
									| ((QData)((IData)(
										__Vtemp2002[0U])) 
									   << 1U)))
								     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77))) 
							     >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_389[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_358)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp2002[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp2002[0U])) 
					      << 1U)))
				     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_389[1U] 
	= __Vtemp2004[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_389[2U] 
	= (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
			 >> 0x3fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3418 
	= ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3395))
	    ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3407) 
		  | (0xfU & ((IData)(1U) << (2U | (1U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3395) 
						      >> 4U)))))))
	    : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3407 
	       | (0xfU & ((IData)(1U) << (2U | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3395) 
						   >> 4U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_244 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_239) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_239)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___GEN_17 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8_io_enq_valid 
	= (0x3fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9_io_enq_valid 
	= (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6_io_enq_valid 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		      & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7_io_enq_valid 
	= (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10_io_enq_valid 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			>> 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11_io_enq_valid 
	= (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1173) 
		     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			>> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___GEN_17 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2_io_enq_valid 
	= (0x3fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3_io_enq_valid 
	= (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_io_enq_valid 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		      & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1_io_enq_valid 
	= (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4_io_enq_valid 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			>> 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5_io_enq_valid 
	= (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_979) 
		     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)) 
			>> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1237 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1168) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1182)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1168) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1330)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_186 
	= (((0U == (0xc000000U & (0xc000000U ^ ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
						 << 0x17U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
						   >> 9U))))) 
	    | (0U == (0xfff0000U & (0x2000000U ^ ((
						   vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
						   << 0x17U) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
						     >> 9U)))))) 
	   | (0U == (0xffff000U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
				    << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
						 >> 9U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1152) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1314)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
					>> 5U))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
		     >> 0xbU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
				     >> 0xaU))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
		     >> 0xbU)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
				  >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
		  >> 0xbU) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
				 >> 0xaU))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
		  >> 0xbU) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
			      >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
			       >> 0xaU))) | (1U & (
						   (((IData)(1U) 
						     << 
						     (3U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
							 >> 0xaU))) 
						    >> 2U) 
						   & (~ 
						      (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
						       >> 0xbU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
			       >> 0xaU))) | (1U & (
						   (((IData)(1U) 
						     << 
						     (3U 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[3U] 
							 >> 0xaU))) 
						    >> 2U) 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1283[2U] 
						      >> 0xbU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
	= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570))
	    ? 0U : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
				   >> 1U))) ? 1U : 
		    ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
				    >> 2U))) ? 2U : 
		     ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
				     >> 3U))) ? 3U : 
		      ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
				      >> 4U))) ? 4U
		        : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
					  >> 5U))) ? 5U
			    : ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
					      >> 6U)))
			        ? 6U : ((1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
						       >> 7U)))
					 ? 7U : ((1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
							     >> 8U)))
						  ? 8U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
							      >> 9U)))
						   ? 9U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
							       >> 0xaU)))
						    ? 0xaU
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								>> 0xbU)))
						     ? 0xbU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								 >> 0xcU)))
						      ? 0xcU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								  >> 0xdU)))
						       ? 0xdU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								   >> 0xeU)))
						        ? 0xeU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								    >> 0xfU)))
							 ? 0xfU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								     >> 0x10U)))
							  ? 0x10U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								      >> 0x11U)))
							   ? 0x11U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
								       >> 0x12U)))
							    ? 0x12U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									>> 0x13U)))
							     ? 0x13U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									 >> 0x14U)))
							      ? 0x14U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									  >> 0x15U)))
							       ? 0x15U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									   >> 0x16U)))
							        ? 0x16U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									    >> 0x17U)))
								 ? 0x17U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									     >> 0x18U)))
								  ? 0x18U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									      >> 0x19U)))
								   ? 0x19U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
									       >> 0x1aU)))
								    ? 0x1aU
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x1bU)))
								     ? 0x1bU
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x1cU)))
								      ? 0x1cU
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x1dU)))
								       ? 0x1dU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x1eU)))
								        ? 0x1eU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x1fU)))
									 ? 0x1fU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x20U)))
									  ? 0x20U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x21U)))
									   ? 0x21U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x22U)))
									    ? 0x22U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x23U)))
									     ? 0x23U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x24U)))
									      ? 0x24U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x25U)))
									       ? 0x25U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x26U)))
									        ? 0x26U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x27U)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x28U)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x29U)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2aU)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2bU)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2cU)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2dU)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2eU)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x2fU)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x30U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x31U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x32U)))
										 ? 0x32U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x33U)))
										 ? 0x33U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x34U)))
										 ? 0x34U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_570 
										>> 0x35U)))
										 ? 0x35U
										 : 0x36U))))))))))))))))))))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WQ(115,52, __Vtemp2006, (VL_ULL(0xfffffffffffff) 
				       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29));
    VL_SHIFTL_WWI(115,115,6, __Vtemp2007, __Vtemp2006, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_298));
    __Vtemp2009[1U] = ((0xe0000000U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_312)
					  ? 0U : (7U 
						  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_310) 
						     >> 9U))) 
					| ((3U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_310) 
						      >> 0xaU))) 
					   & (VL_ULL(0) 
					      != (VL_ULL(0xfffffffffffff) 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29)))) 
				       << 0x1dU)) | (IData)(
							    ((((QData)((IData)(
									       (0x1ffU 
										& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_310)))) 
							       << 0x34U) 
							      | (VL_ULL(0xfffffffffffff) 
								 & ((0U 
								     == 
								     (0x7ffU 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
										>> 0x34U))))
								     ? 
								    (VL_ULL(0xffffffffffffe) 
								     & (((QData)((IData)(
										__Vtemp2007[1U])) 
									 << 0x21U) 
									| ((QData)((IData)(
										__Vtemp2007[0U])) 
									   << 1U)))
								     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29))) 
							     >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_341[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_310)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp2007[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp2007[0U])) 
					      << 1U)))
				     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_341[1U] 
	= __Vtemp2009[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_341[2U] 
	= (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
			 >> 0x3fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_167 
	= (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
					    & ((IData)(0x3900U) 
					       + VL_EXTENDS_II(14,13, 
							       (0xfffU 
								& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
								    << 0xcU) 
								   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
								      >> 0x14U))))))) 
		      + VL_EXTENDS_II(15,14, (3U & 
					      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_164 
					       >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_234 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_209) 
					 & (VL_ULL(0) 
					    != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)) 
						   & (VL_ULL(0) 
						      != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_202)) 
						  & (VL_ULL(0) 
						     == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_205))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_194 
						       << 2U)))) 
					       >> 2U)) 
					   | (((5U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_103)) 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_208))
					       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_201 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_806 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_803) 
		      | (0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_803) 
				     << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__toint 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)
	        ? ((QData)((IData)((0U != ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
					   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp_io_lt) 
					       << 1U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros) 
						    | (((1U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
							== 
							(1U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U])) 
						       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags)))))))))) 
		   | ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
				       >> 0x20U))) 
		      << 0x20U)) : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
				     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out
				     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_351)
					 ? (((QData)((IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out 
							      >> 0x20U))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((((1U 
								  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))) 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_340)) 
								<< 0x1fU) 
							       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_340)
								   ? 0U
								   : 0x7fffffffU)))))
					 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out)))
	    : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))
	        ? ((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_singleOut)
				     ? ((((0U == (7U 
						  & (~ (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
								>> 0x1dU))))) 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
						     >> 0x16U))) 
					 << 9U) | (
						   (((0U 
						      == 
						      (7U 
						       & (~ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
								     >> 0x1dU))))) 
						     & (~ (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
								   >> 0x16U)))) 
						    << 8U) 
						   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_204) 
							& (~ (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
								      >> 0x20U)))) 
						       << 7U) 
						      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_198) 
							   & (~ (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
									 >> 0x20U)))) 
							  << 6U) 
							 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_190) 
							      & (~ (IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
									    >> 0x20U)))) 
							     << 5U) 
							    | ((((0U 
								  == 
								  (7U 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
									      >> 0x1dU)))) 
								 & (~ (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
									       >> 0x20U)))) 
								<< 4U) 
							       | ((((0U 
								     == 
								     (7U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
										>> 0x1dU)))) 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
									       >> 0x20U))) 
								   << 3U) 
								  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_190) 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
										>> 0x20U))) 
								      << 2U) 
								     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_198) 
									  & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
										>> 0x20U))) 
									 << 1U) 
									| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_204) 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
										>> 0x20U))))))))))))
				     : ((0x3ffe00U 
					 & (((0U == 
					      (7U & 
					       (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						    << 3U) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						      >> 0x1dU))))) 
					     << 9U) 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					       >> 0xaU))) 
					| ((((0U == 
					      (7U & 
					       (~ (
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						    << 3U) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						      >> 0x1dU))))) 
					     & (~ (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						   >> 0x13U))) 
					    << 8U) 
					   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_266) 
						& (~ 
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
					       << 7U) 
					      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_260) 
						   & (~ 
						      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
						  << 6U) 
						 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_252) 
						      & (~ 
							 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
						     << 5U) 
						    | ((((0U 
							  == 
							  (7U 
							   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							       << 3U) 
							      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
								 >> 0x1dU)))) 
							 & (~ 
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
							<< 4U) 
						       | ((((0U 
							     == 
							     (7U 
							      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
								  << 3U) 
								 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
								    >> 0x1dU)))) 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
							   << 3U) 
							  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_252) 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
							      << 2U) 
							     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_260) 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
								 << 1U) 
								| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_266) 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))))))))))))) 
		   | ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
				       >> 0x20U))) 
		      << 0x20U)) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_893 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_890) 
		  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_890)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_576 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_571) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_571)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_834 
	= ((~ (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810) 
		     >> 3U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_833 
	= ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810) 
		     >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_832 
	= ((~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810) 
		       >> 1U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_830 
	= ((~ (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810) 
			<< 1U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_467));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_831 
	= ((~ (0x1fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_810))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3150)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3151)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3150)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3151)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3150)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3151)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3271[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3150)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3104))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3151)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3213_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2966)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2967)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2966)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2967)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2966)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2967)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3087[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2966)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2920))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2967)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_3029_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2573[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2453)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2573[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2453)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2573[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2453)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2573[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2406))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2453)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2515_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2636)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2637)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2636)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2637)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2636)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2637)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2757[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2636)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_0))
	     ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2561[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2590))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2637)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2699_1))
		       ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[3U]
		       : 0U));
    __Vtemp2047[2U] = ((0xfffffff0U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___GEN_0) 
					 << 0xeU) | 
					(((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))
					   ? ((1U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_1681)
						 ? 1U
						 : 0U))
					       ? ((0x20U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))
						   ? 0U
						   : 1U)
					       : 0U)
					   : 0U) << 0xcU)) 
				       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
					   << 9U) | 
					  (0x1f0U & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
					    << 4U))))) 
		       | ((0xfffffffeU & (((0U != (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_293) 
						      >> 2U))) 
					   << 3U) | 
					  ((4U & ((0x7ffffffcU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_293) 
						      >> 1U)) 
						  | (0xfffffffcU 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_293) 
							<< 1U)))) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
					      << 1U)))) 
			  | (1U & ((IData)((vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
					    >> 0x20U)) 
				   >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_724[0U] 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_604)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_1))
	    ? ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data) 
			       << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_724[1U] 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_604)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_1))
	    ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data) 
		      >> 0x1fU)) | (0xfffffffeU & ((IData)(
							   (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
							    >> 0x20U)) 
						   << 1U)))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_724[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
	      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_603)
	      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_0))
	     ? (0x18000U | ((0xe00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data) 
				       << 9U)) | (0xfffffff0U 
						  & (0x100U 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_source___05FT_63_data) 
							<< 4U)))))
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_582))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_604)
		        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_666_1))
		       ? __Vtemp2047[2U] : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pte_v 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_413)
		  ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_426)) 
		     & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_419)) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data)))
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_bits_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__slt 
	= (1U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
				 >> 0x3fU))) == (1U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2 
							    >> 0x3fU))))
		  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_16[1U] 
		     >> 0x1fU) : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
				   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2 
					      >> 0x3fU))
				   : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
					      >> 0x3fU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_76 
	= ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_66 
				      >> 0x10U)) | 
	   (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_66 
					  << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1932 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
	    ? (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec 
					       >> 0x26U))))) 
		<< 0x27U) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec)
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)) 
	    | (0xfU & (((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__cause 
				    >> 0x3fU))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)) 
		       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
			    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks) 
				       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku))) 
			  >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__block_probe 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__releaseInFlight) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantInProgress)) 
	     | (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount))) 
	    | (3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscCount))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4030));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_0_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_2_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_3_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (3U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_1_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb_io_requestor_4_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_store_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1746));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1594 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4030) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__cached_grant_wait))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victimize 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3756 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_dirty)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1855___05FT_1864_data 
	= ((0x1fU <= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___RAND_85
	    : ((0x1eU >= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1855
	       [(0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)))]
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vxrand1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_bypass_src_0_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2086) 
	   & ((0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
			>> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2094 
	= ((0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
		     >> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2990 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
	   == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
			>> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3042 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
	   == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
			>> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3019 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
	   == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
			>> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 7U) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 7U) : ((0x1dU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						 ? 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 >> 7U)
						 : 
						((0x1cU 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						  ? 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 7U)
						  : 
						 ((0x1bU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 7U)
						   : 
						  ((0x1aU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 7U)
						    : 
						   ((0x19U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 7U)
						     : 
						    ((0x18U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						      ? 
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 7U)
						      : 
						     ((0x17U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						       ? 
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 7U)
						       : 
						      ((0x16U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						        ? 
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 7U)
						        : 
						       ((0x15U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 7U)
							 : 
							((0x14U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							  ? 
							 ((0x1000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
							   ? 
							  ((0U 
							    != 
							    (0x1fU 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								>> 2U)))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)
							    : 1U)
							   : 
							  ((0U 
							    != 
							    (0x1fU 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								>> 2U)))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)
							    : 0U))
							  : 
							 ((0x13U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							   ? 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 7U)
							   : 
							  ((0x12U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)
							    : 
							   ((0x11U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							     ? 
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							     >> 7U)
							     : 
							    ((0x10U 
							      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							      ? 
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      >> 7U)
							      : 
							     ((0xfU 
							       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							       ? 0U
							       : 
							      ((0xeU 
								== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							        ? 
							       (8U 
								| (7U 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 7U)))
							        : 
							       ((0xdU 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								 ? 0U
								 : 
								((0xcU 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								  ? 
								 (8U 
								  | (7U 
								     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									>> 7U)))
								  : 
								 ((0xbU 
								   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								   ? 
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   >> 7U)
								   : 
								  ((0xaU 
								    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								    ? 
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 7U)
								    : 
								   ((9U 
								     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								     ? 
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								     >> 7U)
								     : 
								    ((8U 
								      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								      ? 
								     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 7U)
								      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1173_rd))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0x14U) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0x14U) : 
				     ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0x14U)
				       : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      >> 0x14U)
					   : ((0x1bU 
					       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 0x14U)
					       : ((0x1aU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0x14U)
						   : 
						  ((0x19U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 0x14U)
						    : 
						   ((0x18U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 0x14U)
						     : 
						    ((0x17U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						      ? 
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 2U)
						      : 
						     ((0x16U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						       ? 
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 2U)
						       : 
						      ((0x15U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						        ? 
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 2U)
						        : 
						       ((0x14U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 2U)
							 : 
							((0x13U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 2U)
							  : 
							 ((0x12U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							   ? 
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)
							   : 
							  ((0x11U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							    ? 
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 2U)
							    : 
							   ((0x10U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							     ? 
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							     >> 2U)
							     : 
							    ((0xfU 
							      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							      ? 0U
							      : 
							     ((0xeU 
							       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							       ? 0U
							       : 
							      ((0xdU 
								== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							        ? 
							       (8U 
								| (7U 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 2U)))
							        : 
							       ((0xcU 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								 ? 
								(8U 
								 | (7U 
								    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								       >> 2U)))
								 : 
								((0xbU 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								  ? 
								 (8U 
								  | (7U 
								     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									>> 2U)))
								  : 
								 ((0xaU 
								   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								   ? 
								  (8U 
								   | (7U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 >> 2U)))
								   : 
								  ((9U 
								    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								    ? 
								   (8U 
								    | (7U 
								       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									  >> 2U)))
								    : 
								   ((8U 
								     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								     ? 
								    (8U 
								     | (7U 
									& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									   >> 2U)))
								     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1173_rd))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
	= ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
	    : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
	        : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
		    : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
		        : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
			    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
			    : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
			        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
			        : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
				    : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
				        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
				        : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					    ? (0x13023U 
					       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1039) 
						   << 0x14U) 
						  | (0xc00U 
						     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1024) 
							<< 0xaU))))
					    : ((0x16U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
					        ? (0x12023U 
						   | (((0xe000000U 
							& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1051) 
							   << 0x16U)) 
						       | (0x1f00000U 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							     << 0x12U))) 
						      | (0xe00U 
							 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1051) 
							    << 9U))))
					        : (
						   (0x15U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						    ? 
						   (0x13027U 
						    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1039) 
							<< 0x14U) 
						       | (0xc00U 
							  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1024) 
							     << 0xaU))))
						    : 
						   ((0x14U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						     ? 
						    ((0x1000U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
						      ? 
						     ((0U 
						       != 
						       (0x1fU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))
						       ? 
						      (0x33U 
						       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956) 
							   << 0xfU) 
							  | (0xf80U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
						       : 
						      ((0U 
							!= 
							(0x1fU 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)))
						        ? 
						       (0xe7U 
							| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956) 
							   << 0xfU))
						        : 
						       (0x100073U 
							| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956) 
							   << 0xfU))))
						      : 
						     ((0U 
						       != 
						       (0x1fU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))
						       ? 
						      (0x33U 
						       | ((0x1f00000U 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      << 0x12U)) 
							  | (0xf80U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
						       : 
						      ((0U 
							!= 
							(0x1fU 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)))
						        ? 
						       (0x67U 
							| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956) 
							   << 0xfU))
						        : 
						       (0x1fU 
							| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_956) 
							   << 0xfU)))))
						     : 
						    ((0x13U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						      ? 
						     (0x13000U 
						      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_880) 
							  << 0x14U) 
							 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_905)))
						      : 
						     ((0x12U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						       ? 
						      (0x12000U 
						       | ((((0xc000000U 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								<< 0x18U)) 
							    | (0x2000000U 
							       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								  << 0xdU))) 
							   | (0x1c00000U 
							      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								 << 0x12U))) 
							  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_905)))
						       : 
						      ((0x11U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
						        ? 
						       (0x13007U 
							| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_880) 
							    << 0x14U) 
							   | (0xf80U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							 ? 
							(0x1013U 
							 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_447) 
							      << 0x14U) 
							     | (0xf8000U 
								& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   << 8U))) 
							    | (0xf80U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
							 : 
							((0xfU 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							  ? 
							 (0x1063U 
							  | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_754 
							      << 0xfU) 
							     | ((0xf00U 
								 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
								    << 7U)) 
								| (0x80U 
								   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
								      >> 4U)))))
							  : 
							 ((0xeU 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							   ? 
							  (0x63U 
							   | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_754 
							       << 0xfU) 
							      | ((0xf00U 
								  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
								     << 7U)) 
								 | (0x80U 
								    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_693) 
								       >> 4U)))))
							   : 
							  ((0xdU 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							    ? 
							   (0x6fU 
							    | (((0x80000000U 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_594 
								    << 0xbU)) 
								| ((0x7fe00000U 
								    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_594 
								       << 0x14U)) 
								   | (0x100000U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_594 
									 << 9U)))) 
							       | (0xff000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_594)))
							    : 
							   ((0xcU 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							     ? 
							    ((3U 
							      == 
							      (3U 
							       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								  >> 0xaU)))
							      ? 
							     (0x840400U 
							      | ((((0x700000U 
								    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								       << 0x12U)) 
								   | ((0x38000U 
								       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									  << 8U)) 
								      | (((7U 
									   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									   ? 3U
									   : 
									  ((6U 
									    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									    ? 2U
									    : 
									   ((5U 
									     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									     ? 0U
									     : 
									    ((4U 
									      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									      ? 0U
									      : 
									     ((3U 
									       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									       ? 7U
									       : 
									      ((2U 
										== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
									        ? 6U
									        : 
									       ((1U 
										== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_506))
										 ? 4U
										 : 0U))))))) 
									 << 0xcU))) 
								  | ((0x380U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
								     | ((0x1000U 
									 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
									 ? 0x3bU
									 : 0x33U))) 
								 | ((0U 
								     == 
								     (3U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 >> 5U)))
								     ? 0x40000000U
								     : 0U)))
							      : 
							     ((2U 
							       == 
							       (3U 
								& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								   >> 0xaU)))
							       ? 
							      (0x47413U 
							       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294) 
								    << 0x14U) 
								   | (0x38000U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 << 8U))) 
								  | (0x380U 
								     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
							       : 
							      ((1U 
								== 
								(3U 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 0xaU)))
							        ? 
							       (0x40000000U 
								| vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_459)
							        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_459)))
							     : 
							    ((0xbU 
							      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							      ? 
							     (((0U 
								== 
								(0x1fU 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								    >> 7U))) 
							       | (2U 
								  == 
								  (0x1fU 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      >> 7U))))
							       ? 
							      (((((0x1000U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
								   ? 7U
								   : 0U) 
								 << 0x1dU) 
								| ((0x18000000U 
								    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								       << 0x18U)) 
								   | (0x4000000U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 << 0x15U)))) 
							       | ((0x2000000U 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      << 0x17U)) 
								  | ((0x1000000U 
								      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									 << 0x12U)) 
								     | ((0xf8000U 
									 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									    << 8U)) 
									| ((0xf80U 
									    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
									   | ((0U 
									       != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294))
									       ? 0x13U
									       : 0x1fU))))))
							       : 
							      ((((0x1000U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
								  ? 0x7fffU
								  : 0U) 
								<< 0x11U) 
							       | ((0x1f000U 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								      << 0xaU)) 
								  | ((0xf80U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
								     | ((0U 
									 != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294))
									 ? 0x37U
									 : 0x3fU)))))
							      : 
							     ((0xaU 
							       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							       ? 
							      (0x13U 
							       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_294) 
								   << 0x14U) 
								  | (0xf80U 
								     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
							       : 
							      ((9U 
								== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
							        ? 
							       ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_300 
								 << 0xfU) 
								| ((0xf80U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
								   | ((0U 
								       != 
								       (0x1fU 
									& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									   >> 7U)))
								       ? 0x1bU
								       : 0x1fU)))
							        : 
							       ((8U 
								 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								 ? 
								(0x13U 
								 | ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_300 
								     << 0xfU) 
								    | (0xf80U 
								       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
								 : 
								((7U 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								  ? 
								 (0x3023U 
								  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_196) 
								      << 0xfU) 
								     | (0xc00U 
									& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_46) 
									   << 0xaU))))
								  : 
								 ((6U 
								   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								   ? 
								  (0x2023U 
								   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_159) 
								       << 0xfU) 
								      | (0xf80U 
									 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_78) 
									    << 7U))))
								   : 
								  ((5U 
								    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								    ? 
								   (0x3027U 
								    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_196) 
									<< 0xfU) 
								       | (0xc00U 
									  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_46) 
									     << 0xaU))))
								    : 
								   ((4U 
								     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								     ? 
								    (0x203fU 
								     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_159) 
									 << 0xfU) 
									| (0xf80U 
									   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_78) 
									      << 7U))))
								     : 
								    ((3U 
								      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								      ? 
								     (0x3403U 
								      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_57) 
									  << 0xfU) 
									 | (0x380U 
									    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
									       << 5U))))
								      : 
								     ((2U 
								       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								       ? 
								      (0x42403U 
								       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_78) 
									    << 0x14U) 
									   | (0x38000U 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 8U))) 
									  | (0x380U 
									     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 5U))))
								       : 
								      ((1U 
									== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1152))
								        ? 
								       (0x3407U 
									| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_57) 
									    << 0xfU) 
									   | (0x380U 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 5U))))
								        : 
								       (0x10400U 
									| ((((0x3c000000U 
									      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 0x13U)) 
									     | ((0x3000000U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 0xdU)) 
										| (0x800000U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 0x12U)))) 
									    | (0x400000U 
									       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 0x10U))) 
									   | ((0x380U 
									       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										<< 5U)) 
									      | ((0U 
										!= 
										(0xffU 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
										>> 5U)))
										 ? 0x13U
										 : 0x1fU)))))))))))))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3418 
	= ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3395))
	    ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3407) 
		  | (0xfU & ((IData)(1U) << (2U | (1U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3395) 
						      >> 4U)))))))
	    : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3407 
	       | (0xfU & ((IData)(1U) << (2U | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3395) 
						   >> 4U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb_io_resp_miss 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_2) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__tlb_miss)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__multipleHits));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__multipleHits)
	    ? VL_ULL(0) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3830)
			    ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem_type))
			        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
				   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits))
			        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem_type))
				    ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
				       & (((QData)((IData)(
							   (((((0x10000U 
								& ((IData)(
									   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
									    >> 0xbU)) 
								   << 0x10U)) 
							       | ((0x8000U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
									       >> 0xbU)) 
								      << 0xfU)) 
								  | (0x4000U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
										>> 0xbU)) 
									<< 0xeU)))) 
							      | ((0x2000U 
								  & ((IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
									      >> 0xbU)) 
								     << 0xdU)) 
								 | (0x1000U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
										>> 0xbU)) 
								       << 0xcU)))) 
							     | (((0x800U 
								  & ((IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
									      >> 0xbU)) 
								     << 0xbU)) 
								 | (0x400U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
										>> 0xbU)) 
								       << 0xaU))) 
								| ((0x200U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
										>> 0xbU)) 
								       << 9U)) 
								   | (0x100U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
										>> 0xbU)) 
									 << 8U))))) 
							    | ((((0x80U 
								  & ((IData)(
									     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
									      >> 0xbU)) 
								     << 7U)) 
								 | (0x40U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
										>> 0xbU)) 
								       << 6U))) 
								| ((0x20U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
										>> 0xbU)) 
								       << 5U)) 
								   | (0x10U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
										>> 0xbU)) 
									 << 4U)))) 
							       | (((8U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
										>> 0xbU)) 
								       << 3U)) 
								   | (4U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
										>> 0xbU)) 
									 << 2U))) 
								  | ((2U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
										>> 0xbU)) 
									 << 1U)) 
								     | (1U 
									& (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
										>> 0xbU))))))))) 
					   << 0x10U) 
					  | (QData)((IData)(
							    (((((0x8000U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
									     >> 0xbU)) 
								    << 0xfU)) 
								| (0x4000U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
									       >> 0xbU)) 
								      << 0xeU))) 
							       | ((0x2000U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
									       >> 0xbU)) 
								      << 0xdU)) 
								  | (0x1000U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
										>> 0xbU)) 
									<< 0xcU)))) 
							      | (((0x800U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
									       >> 0xbU)) 
								      << 0xbU)) 
								  | (0x400U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
										>> 0xbU)) 
									<< 0xaU))) 
								 | ((0x200U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
										>> 0xbU)) 
									<< 9U)) 
								    | (0x100U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
										>> 0xbU)) 
									  << 8U))))) 
							     | ((((0x80U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
									       >> 0xbU)) 
								      << 7U)) 
								  | (0x40U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
										>> 0xbU)) 
									<< 6U))) 
								 | ((0x20U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
										>> 0xbU)) 
									<< 5U)) 
								    | (0x10U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
										>> 0xbU)) 
									  << 4U)))) 
								| (((8U 
								     & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
										>> 0xbU)) 
									<< 3U)) 
								    | (4U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
										>> 0xbU)) 
									  << 2U))) 
								   | ((2U 
								       & ((IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
										>> 0xbU)) 
									  << 1U)) 
								      | (1U 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
										>> 0xbU)))))))))))
				    : VL_ULL(0))) : 
			   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2293)
			     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
				| (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2299)))
			     : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid)));
}
