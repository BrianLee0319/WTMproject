// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

void VTestHarness::_settle__TOP__51(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_settle__TOP__51\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1329,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp1330,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp1336,159,0,5);
    //char	__VpadToAlign60[4];
    VL_SIGW(__Vtemp1337,159,0,5);
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp1338,159,0,5);
    //char	__VpadToAlign108[4];
    VL_SIGW(__Vtemp1342,95,0,3);
    //char	__VpadToAlign124[4];
    VL_SIGW(__Vtemp1343,95,0,3);
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp1346,95,0,3);
    //char	__VpadToAlign156[4];
    VL_SIGW(__Vtemp1347,95,0,3);
    //char	__VpadToAlign172[4];
    VL_SIGW(__Vtemp1350,191,0,6);
    VL_SIGW(__Vtemp1351,191,0,6);
    VL_SIGW(__Vtemp1358,95,0,3);
    //char	__VpadToAlign236[4];
    VL_SIGW(__Vtemp1359,95,0,3);
    //char	__VpadToAlign252[4];
    VL_SIGW(__Vtemp1361,95,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp1362,95,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(__Vtemp1364,95,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(__Vtemp1365,95,0,3);
    //char	__VpadToAlign316[4];
    VL_SIGW(__Vtemp1372,95,0,3);
    //char	__VpadToAlign332[4];
    VL_SIGW(__Vtemp1373,95,0,3);
    //char	__VpadToAlign348[4];
    VL_SIGW(__Vtemp1375,95,0,3);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp1376,95,0,3);
    //char	__VpadToAlign380[4];
    VL_SIGW(__Vtemp1378,95,0,3);
    //char	__VpadToAlign396[4];
    VL_SIGW(__Vtemp1379,95,0,3);
    //char	__VpadToAlign412[4];
    VL_SIGW(__Vtemp1386,95,0,3);
    //char	__VpadToAlign428[4];
    VL_SIGW(__Vtemp1387,95,0,3);
    //char	__VpadToAlign444[4];
    VL_SIGW(__Vtemp1389,95,0,3);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp1390,95,0,3);
    //char	__VpadToAlign476[4];
    VL_SIGW(__Vtemp1392,95,0,3);
    //char	__VpadToAlign492[4];
    VL_SIGW(__Vtemp1393,95,0,3);
    //char	__VpadToAlign508[4];
    VL_SIGW(__Vtemp1395,95,0,3);
    //char	__VpadToAlign524[4];
    VL_SIGW(__Vtemp1396,95,0,3);
    //char	__VpadToAlign540[4];
    VL_SIGW(__Vtemp1397,95,0,3);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp1398,95,0,3);
    //char	__VpadToAlign572[4];
    VL_SIGW(__Vtemp1399,95,0,3);
    //char	__VpadToAlign588[4];
    VL_SIGW(__Vtemp1400,95,0,3);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp1401,95,0,3);
    //char	__VpadToAlign620[4];
    VL_SIGW(__Vtemp1403,95,0,3);
    //char	__VpadToAlign636[4];
    VL_SIGW(__Vtemp1404,95,0,3);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp1406,95,0,3);
    //char	__VpadToAlign668[4];
    VL_SIGW(__Vtemp1412,95,0,3);
    //char	__VpadToAlign684[4];
    VL_SIGW(__Vtemp1413,95,0,3);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp1415,95,0,3);
    //char	__VpadToAlign716[4];
    VL_SIGW(__Vtemp1421,127,0,4);
    VL_SIGW(__Vtemp1422,127,0,4);
    VL_SIGW(__Vtemp1423,127,0,4);
    VL_SIGW(__Vtemp1424,159,0,5);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp1429,95,0,3);
    //char	__VpadToAlign804[4];
    VL_SIGW(__Vtemp1430,95,0,3);
    //char	__VpadToAlign820[4];
    VL_SIGW(__Vtemp1433,95,0,3);
    //char	__VpadToAlign836[4];
    VL_SIGW(__Vtemp1434,95,0,3);
    //char	__VpadToAlign852[4];
    VL_SIGW(__Vtemp1437,95,0,3);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp1438,95,0,3);
    //char	__VpadToAlign884[4];
    VL_SIGW(__Vtemp1441,95,0,3);
    //char	__VpadToAlign900[4];
    VL_SIGW(__Vtemp1442,95,0,3);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp1445,95,0,3);
    //char	__VpadToAlign932[4];
    VL_SIGW(__Vtemp1446,95,0,3);
    //char	__VpadToAlign948[4];
    VL_SIGW(__Vtemp1449,95,0,3);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp1450,95,0,3);
    //char	__VpadToAlign980[4];
    VL_SIGW(__Vtemp1453,95,0,3);
    //char	__VpadToAlign996[4];
    VL_SIGW(__Vtemp1454,95,0,3);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp1457,95,0,3);
    //char	__VpadToAlign1028[4];
    VL_SIGW(__Vtemp1458,95,0,3);
    //char	__VpadToAlign1044[4];
    VL_SIGW(__Vtemp1461,95,0,3);
    //char	__VpadToAlign1060[4];
    VL_SIGW(__Vtemp1462,95,0,3);
    //char	__VpadToAlign1076[4];
    VL_SIGW(__Vtemp1465,95,0,3);
    //char	__VpadToAlign1092[4];
    VL_SIGW(__Vtemp1466,95,0,3);
    //char	__VpadToAlign1108[4];
    VL_SIGW(__Vtemp1469,95,0,3);
    //char	__VpadToAlign1124[4];
    VL_SIGW(__Vtemp1470,95,0,3);
    //char	__VpadToAlign1140[4];
    VL_SIGW(__Vtemp1473,95,0,3);
    //char	__VpadToAlign1156[4];
    VL_SIGW(__Vtemp1474,95,0,3);
    //char	__VpadToAlign1172[4];
    VL_SIGW(__Vtemp1477,95,0,3);
    //char	__VpadToAlign1188[4];
    VL_SIGW(__Vtemp1478,95,0,3);
    //char	__VpadToAlign1204[4];
    VL_SIGW(__Vtemp1481,95,0,3);
    //char	__VpadToAlign1220[4];
    VL_SIGW(__Vtemp1482,95,0,3);
    //char	__VpadToAlign1236[4];
    VL_SIGW(__Vtemp1485,95,0,3);
    //char	__VpadToAlign1252[4];
    VL_SIGW(__Vtemp1486,95,0,3);
    //char	__VpadToAlign1268[4];
    VL_SIGW(__Vtemp1489,95,0,3);
    //char	__VpadToAlign1284[4];
    VL_SIGW(__Vtemp1490,95,0,3);
    //char	__VpadToAlign1300[4];
    VL_SIGW(__Vtemp1493,95,0,3);
    //char	__VpadToAlign1316[4];
    VL_SIGW(__Vtemp1494,95,0,3);
    //char	__VpadToAlign1332[4];
    VL_SIGW(__Vtemp1497,95,0,3);
    //char	__VpadToAlign1348[4];
    VL_SIGW(__Vtemp1498,95,0,3);
    //char	__VpadToAlign1364[4];
    VL_SIGW(__Vtemp1502,95,0,3);
    //char	__VpadToAlign1380[4];
    VL_SIGW(__Vtemp1503,95,0,3);
    //char	__VpadToAlign1396[4];
    VL_SIGW(__Vtemp1505,95,0,3);
    //char	__VpadToAlign1412[4];
    VL_SIGW(__Vtemp1506,95,0,3);
    //char	__VpadToAlign1428[4];
    VL_SIGW(__Vtemp1507,95,0,3);
    //char	__VpadToAlign1444[4];
    VL_SIGW(__Vtemp1508,95,0,3);
    //char	__VpadToAlign1460[4];
    VL_SIGW(__Vtemp1509,95,0,3);
    //char	__VpadToAlign1476[4];
    VL_SIGW(__Vtemp1511,95,0,3);
    //char	__VpadToAlign1492[4];
    VL_SIGW(__Vtemp1512,95,0,3);
    //char	__VpadToAlign1508[4];
    VL_SIGW(__Vtemp1515,95,0,3);
    //char	__VpadToAlign1524[4];
    VL_SIGW(__Vtemp1516,95,0,3);
    //char	__VpadToAlign1540[4];
    VL_SIGW(__Vtemp1519,95,0,3);
    //char	__VpadToAlign1556[4];
    VL_SIGW(__Vtemp1520,95,0,3);
    //char	__VpadToAlign1572[4];
    VL_SIGW(__Vtemp1523,95,0,3);
    //char	__VpadToAlign1588[4];
    VL_SIGW(__Vtemp1524,95,0,3);
    //char	__VpadToAlign1604[4];
    VL_SIGW(__Vtemp1527,95,0,3);
    //char	__VpadToAlign1620[4];
    VL_SIGW(__Vtemp1528,95,0,3);
    //char	__VpadToAlign1636[4];
    VL_SIGW(__Vtemp1531,95,0,3);
    //char	__VpadToAlign1652[4];
    VL_SIGW(__Vtemp1532,95,0,3);
    //char	__VpadToAlign1668[4];
    VL_SIGW(__Vtemp1535,95,0,3);
    //char	__VpadToAlign1684[4];
    VL_SIGW(__Vtemp1536,95,0,3);
    //char	__VpadToAlign1700[4];
    VL_SIGW(__Vtemp1539,95,0,3);
    //char	__VpadToAlign1716[4];
    VL_SIGW(__Vtemp1540,95,0,3);
    //char	__VpadToAlign1732[4];
    VL_SIGW(__Vtemp1543,95,0,3);
    //char	__VpadToAlign1748[4];
    VL_SIGW(__Vtemp1544,95,0,3);
    //char	__VpadToAlign1764[4];
    VL_SIGW(__Vtemp1546,95,0,3);
    //char	__VpadToAlign1780[4];
    VL_SIGW(__Vtemp1547,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1211 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported 
	= (1U & ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96061))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96061) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___GEN_8));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___GEN_8));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_241 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_237)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_addr));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_307 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_239)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_356 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_352)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_422 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_354)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_resp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp___05FT_55_data)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1053)
	        ? 2U : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_b_bits_user 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1143 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1126_1)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1126_0)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1_io_deq_bits_id)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_704_1)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_704_0)));
    VL_EXTEND_WQ(81,50, __Vtemp1329, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(81,81,5, __Vtemp1330, __Vtemp1329, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_CDom_CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[0U] 
	= __Vtemp1330[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[1U] 
	= __Vtemp1330[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[2U] 
	= (0x1ffffU & __Vtemp1330[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
	= ((((((0x2000000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0x32U)) << 0x19U)) 
	       | ((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					>> 0x30U)))) 
		  << 0x18U)) | (((0U != (3U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x2eU)))) 
				 << 0x17U) | ((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 0x2cU)))) 
					      << 0x16U))) 
	     | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0x2aU)))) 
		 << 0x15U) | (((0U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						     >> 0x28U)))) 
			       << 0x14U) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x26U)))) 
					    << 0x13U)))) 
	    | ((((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0x24U)))) 
		 << 0x12U) | (((0U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						     >> 0x22U)))) 
			       << 0x11U) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x20U)))) 
					    << 0x10U))) 
	       | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					 >> 0x1eU)))) 
		   << 0xfU) | (((0U != (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						      >> 0x1cU)))) 
				<< 0xeU) | ((0U != 
					     (3U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x1aU)))) 
					    << 0xdU))))) 
	   | ((((((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					>> 0x18U)))) 
		  << 0xcU) | ((0U != (3U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						    >> 0x16U)))) 
			      << 0xbU)) | (((0U != 
					     (3U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 0x14U)))) 
					    << 0xaU) 
					   | ((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 0x12U)))) 
					      << 9U))) 
	       | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					 >> 0x10U)))) 
		   << 8U) | (((0U != (3U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						    >> 0xeU)))) 
			      << 7U) | ((0U != (3U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 0xcU)))) 
					<< 6U)))) | 
	      ((((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				       >> 0xaU)))) 
		 << 5U) | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						  >> 8U)))) 
			    << 4U) | ((0U != (3U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							    >> 6U)))) 
				      << 3U))) | ((
						   (0U 
						    != 
						    (3U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								>> 4U)))) 
						   << 2U) 
						  | (((0U 
						       != 
						       (3U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								   >> 2U)))) 
						      << 1U) 
						     | (0U 
							!= 
							(3U 
							 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__error_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_last));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_last));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_432 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_423) 
	    << 1U) | (0xfffffffU & ((0x1cU > (2U | 
					      (0x1cU 
					       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_423) 
						  << 2U)))) 
				    & ((0xfffffffU 
					& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_394 
					   << 1U)) 
				       >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_423)))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wdouble 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_single))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt_io_sboard_clr 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen) 
	      & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_93 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_91))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_94))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_91))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_94))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_93 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_91))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_94))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_burst));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_burst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__isZero_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1358 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1348) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1363 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1331)) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1348));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1361 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1331)) 
	    & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1348));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1375 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1365) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1373))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1378 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1365) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1376))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1381 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1368) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1379))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1384 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1368) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1382))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1419 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1409) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1417))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1422 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1409) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1420))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1425 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1412) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1423))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1428 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1412) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1426))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21 
	= ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_20));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id 
	= ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_20));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_170 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)));
    VL_SHIFTR_WWI(129,129,6, __Vtemp1336, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109, 
		  (0x3fU & VL_NEGATE_I((0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count) 
						  << 3U)))));
    __Vtemp1337[0U] = __Vtemp1336[0U];
    __Vtemp1337[1U] = __Vtemp1336[1U];
    __Vtemp1337[2U] = __Vtemp1336[2U];
    __Vtemp1337[3U] = __Vtemp1336[3U];
    __Vtemp1337[4U] = (1U & __Vtemp1336[4U]);
    VL_EXTEND_WW(130,129, __Vtemp1338, __Vtemp1337);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[0U] 
	= (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
				      ? __Vtemp1338[1U]
				      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))) 
		    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
						  ? 
						 __Vtemp1338[0U]
						  : 
						 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[1U] 
	= (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
				       ? __Vtemp1338[1U]
				       : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))) 
		     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
						   ? 
						  __Vtemp1338[0U]
						   : 
						  vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U])))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[2U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[3U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[4U] 
	= (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_616 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_605)
		     ? 0x3fU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_602)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_192))) 
	   & ((1U <= (0x3fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_602))) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_605)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4901 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1243) 
	   | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr_io_rw_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1964 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4995 
	= (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1243)
			      ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
				  << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
					     << 5U) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
					       << 1U)))
			      : 0U))) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2) 
	   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1250));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_52 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47) 
	      & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
			 >> 2U))) << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47) 
					    << 2U)) 
	   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45) 
	       << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			    >> 0x3fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			    >> 0x3fU))));
    VL_EXTEND_WQ(65,64, __Vtemp1342, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_NEGATE_W(3, __Vtemp1343, __Vtemp1342);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_16 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			     >> 0x3fU)))) ? (((QData)((IData)(
							      __Vtemp1343[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       __Vtemp1343[0U])))
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_EXTEND_WQ(65,64, __Vtemp1346, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_NEGATE_W(3, __Vtemp1347, __Vtemp1346);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_16 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			     >> 0x3fU)))) ? (((QData)((IData)(
							      __Vtemp1347[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       __Vtemp1347[0U])))
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_815 
	= (0xffU & ((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_807) 
			       << 1U)) | (0x1feU & 
					  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_807) 
					   << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_872 
	= (0xffU & ((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_810) 
			       << 1U)) | (0x1feU & 
					  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_810) 
					   << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_70 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_60) 
					     << 2U)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_resp)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_resp)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_size 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_user) 
		       >> 5U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				 >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_user) 
		       >> 5U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_b_bits_user) 
				 >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_source 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_user)
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_b_bits_user)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_user)
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_b_bits_user)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_last 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_76));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_76));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
				      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_576 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465) 
		    | ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_573))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_93 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_91))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_94))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_93 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_91))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_96 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_94))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_637 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_630) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx))) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320)) 
	   & (3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_320) 
	   & (3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_32609 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter_auto_out_a_bits_mask))
						   ? 0xffU
						   : 0U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_740 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter_auto_out_a_bits_mask))
						   ? 0xffU
						   : 0U)))))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_388 
	= (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_380))
		  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)) 
				  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_380) 
					      - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362 
	= ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361 
	= ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_388 
	= (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_380))
		  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)) 
				  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_380) 
					      - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362 
	= ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_388 
	= (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_380))
		  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)) 
				  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_380) 
					      - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362 
	= ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_388 
	= (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_380))
		  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)) 
				  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_380) 
					      - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_418 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_408) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_408) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_159 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_149) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_149) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_106 
	= ((0xff00ffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_96 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_96 
						   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__level 
	= (3U & ((((((((((((((((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
							     >> 0xdU))
						  : 0U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1)
						    ? (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
							       >> 0xdU))
						    : 0U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
							      >> 0xdU))
						   : 0U)) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
							     >> 0xdU))
						  : 0U)) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
							    >> 0xdU))
						 : 0U)) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
							   >> 0xdU))
					        : 0U)) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
							  >> 0xdU))
					       : 0U)) 
					  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7)
					      ? (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
							 >> 0xdU))
					      : 0U)) 
					 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
							>> 0xdU))
					     : 0U)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9)
					    ? (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
						       >> 0xdU))
					    : 0U)) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
						      >> 0xdU))
					   : 0U)) | 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
						   >> 0xdU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
							      >> 0xdU))
						   : 0U)) 
				    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_13)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
						   >> 0xdU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_14)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
							      >> 0xdU))
						   : 0U)) 
				  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_15)
				      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
						 >> 0xdU))
				      : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_16)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
							    >> 0xdU))
						 : 0U)) 
				| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_17)
				    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
					       >> 0xdU))
				    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_18)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
							  >> 0xdU))
					       : 0U)) 
			      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_19)
				  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
					     >> 0xdU))
				  : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_20)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
							>> 0xdU))
					     : 0U)) 
			    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_21)
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
					   >> 0xdU))
			        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_22)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
						      >> 0xdU))
					   : 0U)) | 
			  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_23)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
				       >> 0xdU)) : 0U)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_24)
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
					>> 0xdU)) : 0U)) 
			| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_25)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
				       >> 0xdU)) : 0U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_26)
			   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
				      >> 0xdU)) : 0U)) 
		      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_27)
			  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
				     >> 0xdU)) : 0U)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_28)
			 ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
				    >> 0xdU)) : 0U)) 
		    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_29)
		        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
				   >> 0xdU)) : 0U)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_30)
		       ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
				  >> 0xdU)) : 0U)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_31)
		      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
				 >> 0xdU)) : 0U)) | 
		 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_32)
		   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
			      >> 0xdU)) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__partialPPN 
	= (0xfffffU & (((((((((((((((((((((((((((((
						   (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0)
						        ? (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
								   >> 0x2aU))
						        : 0U) 
						      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1)
							  ? (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
								     >> 0x2aU))
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2)
							 ? (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
								    >> 0x2aU))
							 : 0U)) 
						    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3)
						        ? (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
								   >> 0x2aU))
						        : 0U)) 
						   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4)
						       ? (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
								  >> 0x2aU))
						       : 0U)) 
						  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5)
						      ? (IData)(
								(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
								 >> 0x2aU))
						      : 0U)) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6)
						     ? (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
								>> 0x2aU))
						     : 0U)) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7)
						    ? (IData)(
							      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
							       >> 0x2aU))
						    : 0U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
							      >> 0x2aU))
						   : 0U)) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9)
						  ? (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
							     >> 0x2aU))
						  : 0U)) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
							    >> 0x2aU))
						 : 0U)) 
					    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
							   >> 0x2aU))
					        : 0U)) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
							  >> 0x2aU))
					       : 0U)) 
					  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_13)
					      ? (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
							 >> 0x2aU))
					      : 0U)) 
					 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_14)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
							>> 0x2aU))
					     : 0U)) 
					| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_15)
					    ? (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
						       >> 0x2aU))
					    : 0U)) 
				       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_16)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
						      >> 0x2aU))
					   : 0U)) | 
				      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_17)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
						   >> 0x2aU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_18)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
							      >> 0x2aU))
						   : 0U)) 
				    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_19)
				        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
						   >> 0x2aU))
				        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_20)
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
							      >> 0x2aU))
						   : 0U)) 
				  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_21)
				      ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
						 >> 0x2aU))
				      : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_22)
						 ? (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
							    >> 0x2aU))
						 : 0U)) 
				| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_23)
				    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
					       >> 0x2aU))
				    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_24)
					       ? (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
							  >> 0x2aU))
					       : 0U)) 
			      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_25)
				  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
					     >> 0x2aU))
				  : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_26)
					     ? (IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
							>> 0x2aU))
					     : 0U)) 
			    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_27)
			        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
					   >> 0x2aU))
			        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_28)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
						      >> 0x2aU))
					   : 0U)) | 
			  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_29)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
				       >> 0x2aU)) : 0U)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_30)
			     ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
					>> 0x2aU)) : 0U)) 
			| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_31)
			    ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
				       >> 0x2aU)) : 0U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_32)
			   ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
				      >> 0x2aU)) : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits 
	= (((QData)((IData)((((((0x10000U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled)) 
					     << 0x10U)) 
				| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_32) 
				    << 0xfU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_31) 
						<< 0xeU))) 
			       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_30) 
				   << 0xdU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_29) 
					       << 0xcU))) 
			      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_28) 
				   << 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_27) 
					       << 0xaU)) 
				 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_26) 
				     << 9U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_25) 
					       << 8U)))) 
			     | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_24) 
				   << 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_23) 
					     << 6U)) 
				 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_22) 
				     << 5U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_21) 
					       << 4U))) 
				| ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_20) 
				     << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_19) 
					       << 2U)) 
				   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_18) 
				       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_17))))))) 
	    << 0x11U) | (QData)((IData)(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_16) 
					     << 0x10U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_15) 
						<< 0xfU) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_14) 
						  << 0xeU))) 
					   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_13) 
					       << 0xdU) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12) 
						 << 0xcU))) 
					  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11) 
					       << 0xbU) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10) 
						 << 0xaU)) 
					     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9) 
						 << 9U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8) 
						   << 8U)))) 
					 | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7) 
					       << 7U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6) 
						 << 6U)) 
					     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5) 
						 << 5U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4) 
						   << 4U))) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3) 
						 << 3U) 
						| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2) 
						   << 2U)) 
					       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1) 
						   << 1U) 
						  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_390 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241) 
	   | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_339 
	= (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
		     >> 3U) | (0x1feU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
					 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_317 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240) 
	   | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240) 
		       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_327 
	= (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240)) 
		    | (0x1feU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240)) 
				 << 1U))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_73))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_76))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_79))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_82))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_73))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_76))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_79))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_82))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_73))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_76))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_79))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_82))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_73))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_65) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_76))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_79))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_68) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_82))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1018 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
	    << 1U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
		       | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
		      | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? 3U : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				 ? 3U : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					  ? 3U : ((0xbU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						   ? 3U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 2U
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 2U
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						      ? 2U
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						       ? 2U
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						        ? 2U
						        : 0U)))))))))
		    : 0U) : 4U) : 6U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_source 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		   ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		       ? (~ (2U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
				   << 1U))) : ((9U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (~ 
						   (2U 
						    & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
						       << 1U)))
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 
						   (~ 
						    (2U 
						     & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							<< 1U)))
						    : 
						   ((0xbU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 
						    (~ 
						     (2U 
						      & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							 << 1U)))
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						      ? 
						     (~ 
						      (2U 
						       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							  << 1U)))
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						       ? 
						      (~ 
						       (2U 
							& ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							   << 1U)))
						       : 
						      ((0xdU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						        ? 
						       (~ 
							(2U 
							 & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							    << 1U)))
						        : 
						       ((0xeU 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
							 ? 
							(~ 
							 (2U 
							  & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
							     << 1U)))
							 : 
							((0xfU 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
							 & (~ 
							    (2U 
							     & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
								<< 1U))))))))))))
		   : (~ (2U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
			       << 1U)))) : (~ (2U & 
					       ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
						<< 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 
						   (3U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 
						    (3U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
						     : 0U)))))))))
		    : (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
	        : (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
	    : 6U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_a_bits_address 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
						     : 0U)))))))))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))
	    : (IData)((VL_ULL(0xffffffffc0) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_size 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size___05FT_55_data)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_468)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_user 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_user));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_io_enq_bits_last 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_387)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_384)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_475 
	= (((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_552)
	     : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_594)
		 : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720)
		     : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_762)
			 : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
			     : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
				 : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
				     : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
					 : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
					     : ((0xaU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
						 : 
						((9U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
						  : 
						 ((8U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717)
						   : 
						  (((0U 
						     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636)) 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_638) 
						       != 
						       (1U 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
							    >> 2U))))) 
						   | (8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636))))))))))))))) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_387)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_101))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_106 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_93) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_104))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_109 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_107))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_96) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1002 
	= ((~ (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_fifoId) 
		  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_376)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_327) 
	      | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))));
    VL_EXTEND_WW(171,108, __Vtemp1350, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(171,171,6, __Vtemp1351, __Vtemp1350, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CDom_CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[0U] 
	= __Vtemp1351[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[1U] 
	= __Vtemp1351[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[2U] 
	= __Vtemp1351[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[3U] 
	= __Vtemp1351[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[4U] 
	= __Vtemp1351[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[5U] 
	= (0x7ffU & __Vtemp1351[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
	= (((QData)((IData)(((((((0x8000000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						<< 0xfU)) 
				 | ((0U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						  >> 0xaU))) 
				    << 0x1aU)) | ((
						   (0U 
						    != 
						    (3U 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							>> 8U))) 
						   << 0x19U) 
						  | ((0U 
						      != 
						      (3U 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							  >> 6U))) 
						     << 0x18U))) 
			       | (((0U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						 >> 4U))) 
				   << 0x17U) | (((0U 
						  != 
						  (3U 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						      >> 2U))) 
						 << 0x16U) 
						| ((0U 
						    != 
						    (3U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])) 
						   << 0x15U)))) 
			      | (((((0U != (3U & ((
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						   << 2U) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						     >> 0x1eU)))) 
				    << 0x14U) | ((0U 
						  != 
						  (3U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						       << 4U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							 >> 0x1cU)))) 
						 << 0x13U)) 
				  | (((0U != (3U & 
					      ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						<< 6U) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						  >> 0x1aU)))) 
				      << 0x12U) | (
						   (0U 
						    != 
						    (3U 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							 << 8U) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							   >> 0x18U)))) 
						   << 0x11U))) 
				 | (((0U != (3U & (
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						    << 0xaU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						      >> 0x16U)))) 
				     << 0x10U) | ((
						   (0U 
						    != 
						    (3U 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							 << 0xcU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							   >> 0x14U)))) 
						   << 0xfU) 
						  | ((0U 
						      != 
						      (3U 
						       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							   << 0xeU) 
							  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							     >> 0x12U)))) 
						     << 0xeU))))) 
			     | ((((((0U != (3U & ((
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						   << 0x10U) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						     >> 0x10U)))) 
				    << 0xdU) | ((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						      << 0x12U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							>> 0xeU)))) 
						<< 0xcU)) 
				  | (((0U != (3U & 
					      ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						<< 0x14U) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						  >> 0xcU)))) 
				      << 0xbU) | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							<< 0x16U) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							  >> 0xaU)))) 
						  << 0xaU))) 
				 | (((0U != (3U & (
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						    << 0x18U) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						      >> 8U)))) 
				     << 9U) | (((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						      << 0x1aU) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							>> 6U)))) 
						<< 8U) 
					       | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
							<< 0x1cU) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							  >> 4U)))) 
						  << 7U)))) 
				| (((((0U != (3U & 
					      ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						<< 0x1eU) 
					       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						  >> 2U)))) 
				      << 6U) | ((0U 
						 != 
						 (3U 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U])) 
						<< 5U)) 
				    | (((0U != (3U 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						    << 2U) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						      >> 0x1eU)))) 
					<< 4U) | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 4U) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 0x1cU)))) 
						  << 3U))) 
				   | (((0U != (3U & 
					       ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						 << 6U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						   >> 0x1aU)))) 
				       << 2U) | (((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 8U) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 0x18U)))) 
						  << 1U) 
						 | (0U 
						    != 
						    (3U 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							 << 0xaU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							   >> 0x16U))))))))))) 
	    << 0x1bU) | (QData)((IData)((((((((0U != 
					       (3U 
						& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						    << 0xcU) 
						   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						      >> 0x14U)))) 
					      << 0x1aU) 
					     | ((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						      << 0xeU) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							>> 0x12U)))) 
						<< 0x19U)) 
					    | (((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						      << 0x10U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							>> 0x10U)))) 
						<< 0x18U) 
					       | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 0x12U) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 0xeU)))) 
						  << 0x17U))) 
					   | (((0U 
						!= 
						(3U 
						 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						     << 0x14U) 
						    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						       >> 0xcU)))) 
					       << 0x16U) 
					      | (((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 0x16U) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 0xaU)))) 
						  << 0x15U) 
						 | ((0U 
						     != 
						     (3U 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							  << 0x18U) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							    >> 8U)))) 
						    << 0x14U)))) 
					  | (((((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
						      << 0x1aU) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							>> 6U)))) 
						<< 0x13U) 
					       | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 0x1cU) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 4U)))) 
						  << 0x12U)) 
					      | (((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
							<< 0x1eU) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  >> 2U)))) 
						  << 0x11U) 
						 | ((0U 
						     != 
						     (3U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U])) 
						    << 0x10U))) 
					     | (((0U 
						  != 
						  (3U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						       << 2U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							 >> 0x1eU)))) 
						 << 0xfU) 
						| (((0U 
						     != 
						     (3U 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  << 4U) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							    >> 0x1cU)))) 
						    << 0xeU) 
						   | ((0U 
						       != 
						       (3U 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							    << 6U) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							      >> 0x1aU)))) 
						      << 0xdU))))) 
					 | ((((((0U 
						 != 
						 (3U 
						  & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						      << 8U) 
						     | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							>> 0x18U)))) 
						<< 0xcU) 
					       | ((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							<< 0xaU) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							  >> 0x16U)))) 
						  << 0xbU)) 
					      | (((0U 
						   != 
						   (3U 
						    & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							<< 0xcU) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							  >> 0x14U)))) 
						  << 0xaU) 
						 | ((0U 
						     != 
						     (3U 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  << 0xeU) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							    >> 0x12U)))) 
						    << 9U))) 
					     | (((0U 
						  != 
						  (3U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						       << 0x10U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							 >> 0x10U)))) 
						 << 8U) 
						| (((0U 
						     != 
						     (3U 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  << 0x12U) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							    >> 0xeU)))) 
						    << 7U) 
						   | ((0U 
						       != 
						       (3U 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							    << 0x14U) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							      >> 0xcU)))) 
						      << 6U)))) 
					    | ((((0U 
						  != 
						  (3U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
						       << 0x16U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							 >> 0xaU)))) 
						 << 5U) 
						| (((0U 
						     != 
						     (3U 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							  << 0x18U) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							    >> 8U)))) 
						    << 4U) 
						   | ((0U 
						       != 
						       (3U 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							    << 0x1aU) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							      >> 6U)))) 
						      << 3U))) 
					       | (((0U 
						    != 
						    (3U 
						     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							 << 0x1cU) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							   >> 4U)))) 
						   << 2U) 
						  | (((0U 
						       != 
						       (3U 
							& ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
							    << 0x1eU) 
							   | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
							      >> 2U)))) 
						      << 1U) 
						     | (0U 
							!= 
							(3U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U]))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_517 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_507) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_515))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_520 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_507) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_518))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_523 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_510) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_521))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_526 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_510) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_524))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pte_cache_hit 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_509)) 
	   & (2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_585 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_509) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_509)));
    VL_EXTEND_WQ(66,63, __Vtemp1358, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1359, __Vtemp1358, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1361, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1359[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1359[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1359[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1362, __Vtemp1361, 0xcU);
    __Vtemp1364[0U] = (0x60000000U ^ __Vtemp1362[0U]);
    __Vtemp1364[1U] = __Vtemp1362[1U];
    __Vtemp1364[2U] = (3U & __Vtemp1362[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1365, __Vtemp1364);
    VL_EXTEND_WQ(66,63, __Vtemp1372, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1373, __Vtemp1372, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1375, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1373[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1373[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1373[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1376, __Vtemp1375, 0xcU);
    __Vtemp1378[0U] = (0xc000000U ^ __Vtemp1376[0U]);
    __Vtemp1378[1U] = __Vtemp1376[1U];
    __Vtemp1378[2U] = (3U & __Vtemp1376[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1379, __Vtemp1378);
    VL_EXTEND_WQ(66,63, __Vtemp1386, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1387, __Vtemp1386, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1389, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1387[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1387[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1387[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1390, __Vtemp1389, 0xcU);
    __Vtemp1392[0U] = (0x80000000U ^ __Vtemp1390[0U]);
    __Vtemp1392[1U] = __Vtemp1390[1U];
    __Vtemp1392[2U] = (3U & __Vtemp1390[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1393, __Vtemp1392);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaHomogeneous 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)) 
		   & (((0U == (((0xe0000000U & __Vtemp1365[0U]) 
				| __Vtemp1365[1U]) 
			       | (7U & __Vtemp1365[2U]))) 
		       | (0U == (((0xfc000000U & __Vtemp1379[0U]) 
				  | __Vtemp1379[1U]) 
				 | (7U & __Vtemp1379[2U])))) 
		      | (0U == (((0xf0000000U & __Vtemp1393[0U]) 
				 | __Vtemp1393[1U]) 
				| (7U & __Vtemp1393[2U])))))));
    VL_EXTEND_WI(66,32, __Vtemp1395, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1060 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1395);
    VL_EXTEND_WI(66,32, __Vtemp1396, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1163 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1396);
    VL_EXTEND_WI(66,32, __Vtemp1397, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1266 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1397);
    VL_EXTEND_WI(66,32, __Vtemp1398, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1369 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1398);
    VL_EXTEND_WI(66,32, __Vtemp1399, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1472 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1399);
    VL_EXTEND_WI(66,32, __Vtemp1400, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1575 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1400);
    VL_EXTEND_WI(66,32, __Vtemp1401, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1678 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1401);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1067 
	= ((VL_ULL(0) == (VL_ULL(0xc8000000) & (VL_ULL(0x8000000) 
						^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
	   | (VL_ULL(0) == (VL_ULL(0xc8010000) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address 
	= (((((((VL_ULL(0) == (VL_ULL(0x1fffc000000) 
			       & (VL_ULL(0xc000000) 
				  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
		| (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
				 & (VL_ULL(0x2000000) 
				    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffffff000) 
				& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
	      | (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
			       & (VL_ULL(0x10000) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	     | (VL_ULL(0) == (VL_ULL(0x1fff0000000) 
			      & (VL_ULL(0x80000000) 
				 ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffe0000000) 
			     & (VL_ULL(0x60000000) 
				^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffffff000) & 
			    (VL_ULL(0x3000) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1136 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_54 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_86 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_261 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_436 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_611 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_786 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_961 
	= ((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U))) < (0x1fffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						     << 2U)) 
						   >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1144 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_94 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						   << 2U)) 
						 >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_444 
	= (0x1fffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
				   >> 3U)) ^ (~ ((~ 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						   << 2U)) 
						 >> 3U))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_780 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_857 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1037)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_1037)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_132 
	= ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
				      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___GEN_12 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
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
    VL_EXTEND_WI(76,23, __Vtemp1403, (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662)));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1404, __Vtemp1403, 0x35U);
    __Vtemp1406[0U] = (IData)((((QData)((IData)((0xfffU 
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
								  & __Vtemp1404[2U]))) 
						 << 0x28U) 
						| (((QData)((IData)(
								    __Vtemp1404[1U])) 
						    << 8U) 
						   | ((QData)((IData)(
								      __Vtemp1404[0U])) 
						      >> 0x18U))))));
    __Vtemp1406[1U] = (IData)(((((QData)((IData)((0xfffU 
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
								   & __Vtemp1404[2U]))) 
						  << 0x28U) 
						 | (((QData)((IData)(
								     __Vtemp1404[1U])) 
						     << 8U) 
						    | ((QData)((IData)(
								       __Vtemp1404[0U])) 
						       >> 0x18U))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1406[0U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1406[1U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U])
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
    VL_EXTEND_WI(76,23, __Vtemp1412, (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702)));
    VL_SHIFTL_WWI(76,76,32, __Vtemp1413, __Vtemp1412, 0x35U);
    __Vtemp1415[0U] = (IData)((((QData)((IData)((0xfffU 
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
								  & __Vtemp1413[2U]))) 
						 << 0x28U) 
						| (((QData)((IData)(
								    __Vtemp1413[1U])) 
						    << 8U) 
						   | ((QData)((IData)(
								      __Vtemp1413[0U])) 
						      >> 0x18U))))));
    __Vtemp1415[1U] = (IData)(((((QData)((IData)((0xfffU 
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
								   & __Vtemp1413[2U]))) 
						  << 0x28U) 
						 | (((QData)((IData)(
								     __Vtemp1413[1U])) 
						     << 8U) 
						    | ((QData)((IData)(
								       __Vtemp1413[0U])) 
						       >> 0x18U))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1415[0U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U])
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)) 
		  | (0U == (0x1fU & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
					 << 4U) | (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
						   >> 0x1cU)))))))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleIn)
	        ? __Vtemp1415[1U] : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U])
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_947 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			 >> 0x23U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset 
	= ((IData)(vlTOPp->TestHarness__DOT__dut_reset) 
	   | (IData)(vlTOPp->reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1135 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
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
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1055 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_1039)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    VL_EXTEND_WQ(127,64, __Vtemp1421, (((QData)((IData)(
							vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    VL_SHIFTL_WWI(127,127,6, __Vtemp1422, __Vtemp1421, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_616));
    __Vtemp1423[0U] = __Vtemp1422[0U];
    __Vtemp1423[1U] = __Vtemp1422[1U];
    __Vtemp1423[2U] = __Vtemp1422[2U];
    __Vtemp1423[3U] = (0x7fffffffU & __Vtemp1422[3U]);
    VL_EXTEND_WW(129,127, __Vtemp1424, __Vtemp1423);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1424[0U] : ((0xfffffffeU & ((IData)(
							 (((QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
						 << 1U)) 
				 | (1U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___GEN_16[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_614)
	    ? __Vtemp1424[1U] : ((1U & ((IData)((((QData)((IData)(
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
	    ? __Vtemp1424[2U] : ((1U & ((IData)(((((QData)((IData)(
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
	    ? __Vtemp1424[3U] : ((1U & ((IData)(((1U 
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
	    ? __Vtemp1424[4U] : (1U & ((IData)((((1U 
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
    __Vtemp1429[0U] = 0U;
    __Vtemp1429[1U] = 0U;
    __Vtemp1429[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1430, __Vtemp1429, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1433[0U] = 0U;
    __Vtemp1433[1U] = 0U;
    __Vtemp1433[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1434, __Vtemp1433, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1437[0U] = 0U;
    __Vtemp1437[1U] = 0U;
    __Vtemp1437[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1438, __Vtemp1437, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1441[0U] = 0U;
    __Vtemp1441[1U] = 0U;
    __Vtemp1441[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1442, __Vtemp1441, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1445[0U] = 0U;
    __Vtemp1445[1U] = 0U;
    __Vtemp1445[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1446, __Vtemp1445, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1449[0U] = 0U;
    __Vtemp1449[1U] = 0U;
    __Vtemp1449[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1450, __Vtemp1449, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1453[0U] = 0U;
    __Vtemp1453[1U] = 0U;
    __Vtemp1453[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1454, __Vtemp1453, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1457[0U] = 0U;
    __Vtemp1457[1U] = 0U;
    __Vtemp1457[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1458, __Vtemp1457, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    __Vtemp1461[0U] = 0U;
    __Vtemp1461[1U] = 0U;
    __Vtemp1461[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1462, __Vtemp1461, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
	     ? 0U : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
		      ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExp_Z))
			  ? 0U : ((4U & (__Vtemp1430[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp1434[0U]) 
				   | (1U & (__Vtemp1438[0U] 
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
						       & (__Vtemp1442[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp1446[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp1450[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp1454[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp1458[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp1462[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
		    >> 0x1aU)));
    __Vtemp1465[0U] = 0U;
    __Vtemp1465[1U] = 0U;
    __Vtemp1465[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1466, __Vtemp1465, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1469[0U] = 0U;
    __Vtemp1469[1U] = 0U;
    __Vtemp1469[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1470, __Vtemp1469, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1473[0U] = 0U;
    __Vtemp1473[1U] = 0U;
    __Vtemp1473[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1474, __Vtemp1473, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1477[0U] = 0U;
    __Vtemp1477[1U] = 0U;
    __Vtemp1477[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1478, __Vtemp1477, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1481[0U] = 0U;
    __Vtemp1481[1U] = 0U;
    __Vtemp1481[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1482, __Vtemp1481, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1485[0U] = 0U;
    __Vtemp1485[1U] = 0U;
    __Vtemp1485[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1486, __Vtemp1485, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1489[0U] = 0U;
    __Vtemp1489[1U] = 0U;
    __Vtemp1489[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1490, __Vtemp1489, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1493[0U] = 0U;
    __Vtemp1493[1U] = 0U;
    __Vtemp1493[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1494, __Vtemp1493, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    __Vtemp1497[0U] = 0U;
    __Vtemp1497[1U] = 0U;
    __Vtemp1497[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1498, __Vtemp1497, 
		   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
		      ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sExp))
			  ? 0U : ((4U & (__Vtemp1466[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp1470[0U]) 
				   | (1U & (__Vtemp1474[0U] 
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
						       & (__Vtemp1478[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp1482[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp1486[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp1490[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp1494[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp1498[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_93_sig 
		    >> 0x1aU)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_778 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_758)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_849 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT___T_361)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bootrom__DOT__TLMonitor__DOT___T_827)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_785 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_362)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_765)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    VL_EXTEND_WQ(66,63, __Vtemp1502, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1503, __Vtemp1502, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1505, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1503[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1503[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1503[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1506, __Vtemp1505, 0xcU);
    __Vtemp1507[0U] = __Vtemp1506[0U];
    __Vtemp1507[1U] = __Vtemp1506[1U];
    __Vtemp1507[2U] = (3U & __Vtemp1506[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1508, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						  << 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp1509, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
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
			    | VL_GTE_W(3, __Vtemp1507, __Vtemp1508)) 
			   | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1648)) 
			      & VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1509)))))));
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
    __Vtemp1511[0U] = 0U;
    __Vtemp1511[1U] = 0U;
    __Vtemp1511[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1512, __Vtemp1511, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1515[0U] = 0U;
    __Vtemp1515[1U] = 0U;
    __Vtemp1515[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1516, __Vtemp1515, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1519[0U] = 0U;
    __Vtemp1519[1U] = 0U;
    __Vtemp1519[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1520, __Vtemp1519, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1523[0U] = 0U;
    __Vtemp1523[1U] = 0U;
    __Vtemp1523[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1524, __Vtemp1523, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1527[0U] = 0U;
    __Vtemp1527[1U] = 0U;
    __Vtemp1527[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1528, __Vtemp1527, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1531[0U] = 0U;
    __Vtemp1531[1U] = 0U;
    __Vtemp1531[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1532, __Vtemp1531, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1535[0U] = 0U;
    __Vtemp1535[1U] = 0U;
    __Vtemp1535[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1536, __Vtemp1535, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1539[0U] = 0U;
    __Vtemp1539[1U] = 0U;
    __Vtemp1539[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1540, __Vtemp1539, 
		   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
							       >> 0x14U))))))));
    __Vtemp1543[0U] = 0U;
    __Vtemp1543[1U] = 0U;
    __Vtemp1543[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1544, __Vtemp1543, 
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
			 ? 0U : ((4U & (__Vtemp1512[0U] 
					<< 2U)) | (
						   (2U 
						    & __Vtemp1516[0U]) 
						   | (1U 
						      & (__Vtemp1520[0U] 
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
						      & (__Vtemp1524[1U] 
							 >> 0x15U)) 
						     | ((0x10U 
							 & (__Vtemp1528[1U] 
							    >> 0x17U)) 
							| ((8U 
							    & (__Vtemp1532[1U] 
							       >> 0x19U)) 
							   | ((4U 
							       & (__Vtemp1536[1U] 
								  >> 0x1bU)) 
							      | ((2U 
								  & (__Vtemp1540[1U] 
								     >> 0x1dU)) 
								 | (1U 
								    & (__Vtemp1544[1U] 
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1857 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_b_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_b_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
    __Vtemp1546[0U] = 0U;
    __Vtemp1546[1U] = 0U;
    __Vtemp1546[2U] = 0U;
    __Vtemp1547[0U] = 0U;
    __Vtemp1547[1U] = 0U;
    __Vtemp1547[2U] = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_60 
	= ((0U == (7U & (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in2[1U] 
				       >> 0x1dU))))) 
	   | (((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_rm)) 
	       != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp_io_lt) 
		   | (VL_GTS_IWW(1,65,65, __Vtemp1546, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1) 
		      & VL_LTES_IWW(1,65,65, __Vtemp1547, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2)))) 
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2450 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2433)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2558 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_2541)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT___T_37 
	= ((1U >= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_0) 
			 + (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_1) 
				  + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_2)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut_reset));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_c_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_c_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut_reset)));
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
}
